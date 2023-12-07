#!/usr/bin/env python3

import sys
import os
sys.path.insert(0, '..')

from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
    ExeCompilationOutput,
    ObjectCompilationOutput,
    ASMCompilationOutput,
    LLVMIRCompilationOutput,
    OptLevel,
    SourceProgram,
    Language,
)
from diopter.generator import CSmithGenerator
from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from elftools.elf.sections import SymbolTableSection

import subprocess

import angr

import time

# global variables
PROGRAM_PATH = "../program_examples/"
TOOL_BINARY_PATH = "../clang_tools/build/bin/"

gcc_0 = CompilationSetting(
    compiler=CompilerExe.get_system_gcc(),
    opt_level=OptLevel.O0,
    flags=("-march=native",),
)
gcc_1 = CompilationSetting(
    compiler=CompilerExe.get_system_gcc(),
    opt_level=OptLevel.O1,
    flags=("-march=native",),
)
gcc_2 = CompilationSetting(
    compiler=CompilerExe.get_system_gcc(),
    opt_level=OptLevel.O2,
    flags=("-march=native",),
)
gcc_3 = CompilationSetting(
    compiler=CompilerExe.get_system_gcc(),
    opt_level=OptLevel.O3,
    flags=("-march=native",),
)

gcc_settings = [gcc_0, gcc_1, gcc_2, gcc_3]

clang_0 = CompilationSetting(
    compiler=CompilerExe.get_system_clang(),
    opt_level=OptLevel.O0,
    flags=("-march=native",),
)
clang_1 = CompilationSetting(
    compiler=CompilerExe.get_system_clang(),
    opt_level=OptLevel.O1,
    flags=("-march=native",),
)
clang_2 = CompilationSetting(
    compiler=CompilerExe.get_system_clang(),
    opt_level=OptLevel.O2,
    flags=("-march=native",),
)
clang_3 = CompilationSetting(
    compiler=CompilerExe.get_system_clang(),
    opt_level=OptLevel.O3,
    flags=("-march=native",),
)

clang_settings = [clang_0, clang_1, clang_2, clang_3]
settings = gcc_settings + clang_settings


# Report Class to store and summarize intersting results
class Report():
    def __init__(self, name, program, setting1, setting1_assembly, setting2, setting2_assembly):
        self.name = name
        self.program = program
        self.setting1 = setting1
        self.setting1_assembly = setting1_assembly
        self.setting2 = setting2
        self.setting2_assembly = setting2_assembly
        self.interesting_variables = []
        self.interesting_lines = {}

    def add_interesting_variable(self, var, setting1_lines, setting2_lines):
        self.interesting_variables.append(var)
        lines_entry = {"setting1:": setting1_lines, "setting2": setting2_lines}
        self.interesting_lines[var] = lines_entry
        return

    def to_string(self):
        result = "--- Interesting Case Report --- \n\n"
        source_code = "Source Code: \n" + self.program.code + "\n\n"
        assembly1 = "Assembly Code with Setting 1: \n" + self.setting1_assembly + "\n\n"
        assembly2 = "Assembly Code with Setting 2: \n" + self.setting2_assembly + "\n\n"
        variables = "Interesting Variables: \n" + str(self.interesting_variables) + "\n\n"
        lines = "Interesting Assembly Lines: \n" + str(self.interesting_lines) + "\n\n"
        result = result + variables + lines + source_code + assembly1 + assembly2
        return result
    
    def save_to_file(self):
        f = open("../reports/" + self.name + ".txt", "w")
        content = self.to_string()
        f.write(content)
        f.close()
        return

# Object that represents instruction with additional information
class Instruction_Entry():
    def __init__(self, op, args, constant, write, value):
        self.op = op
        self.args = args
        self.constant = constant
        self.write = write
        self.value = value

    def to_string(self):
        args_str = ""
        for arg in self.args:
            args_str = args_str + " " + arg
        instr_str = "instruction: " + self.op + " " + args_str
        constant_str = "constant: " + str(self.constant)
        write_str = "write: " + str(self.write)
        result = constant_str + " " + write_str + " " + instr_str + " value: " + str(self.value)
        return result

# Object that represents all the instruction in a block that write or read a variable
class Global_Entry():
    def __init__(self, name, instructions=[]):
        self.name = name
        self.instructions = instructions

    def to_string(self):
        instr_str = ""
        for instr in self.instructions:
            instr_str = instr_str + instr.to_string() + "\n"
        return "Variable: " + self.name + ":\n" + instr_str

# Object that represents the node in the CFG with additional information
class Node_Extended():
    def __init__(self, node, globals=[]):
        self.node = node
        self.globals = globals

    def to_string(self):
        globals_str = ""
        for glb in self.globals:
            globals_str = globals_str + glb.to_string() + "\n"
        return "Node: " + self.node.name + ": \n" + globals_str

    def has_constant_write(self, g):
        result = False
        num = 0
        for var in self.globals:
            if var.name == g:
                for instr in var.instructions:
                    if instr.constant and instr.write:
                        result = True
                        num += 1
        return result, num
    
    def has_var_write(self, g):
        result = False
        num = 0
        for var in self.globals:
            if var.name == g:
                for instr in var.instructions:
                    if not instr.constant and instr.write:
                        result = True
                        num += 1
        return result, num

    def has_read(self, g):
        result = False
        num = 0
        for var in self.globals:
            if var.name == g:
                for instr in var.instructions:
                    if not instr.write:
                        result = True
                        num += 1
        return result, num

    def get_successor_ext(self, nodes_ext):
        result = []
        successors = self.node.successors
        for node_ext in nodes_ext:
            if node_ext.node in successors:
                result.append(node_ext)
        return result

    def get_predecessor_ext(self, nodes_ext):
        result = []
        predecessors = self.node.predecessors
        for node_ext in nodes_ext:
            if node_ext.node in predecessors:
                result.append(node_ext)
        return result

# gets the symbol table of the program and returns it as a list
def get_sym_table(compiled_program):
    filename = compiled_program.output.filename
    # get symbol table
    cmd = ["readelf", "-s", str(filename)]
    sym_table = subprocess.run(cmd, stdout=subprocess.PIPE).stdout.decode('utf-8')
    i = 0
    # print(sym_table)
    lines = sym_table.splitlines()
    sym_table_list = []
    content = []
    while i < len(lines):
        if "Symbol table" in lines[i]:
            column_names = lines[i + 1].split()
            i += 2
        elif lines[i] == "":
            i += 1
        else:
            values = lines[i].split()
            content.append(values)
            i += 1
    for entry in content:
        entry_dict = {}
        for i in range(min(len(column_names), len(entry))):
            entry_dict[column_names[i]] = entry[i]
        sym_table_list.append(entry_dict)
    return sym_table_list

# gets the global variables of the program from the symbol table
def get_globals(compiled_program):
    g = []
    # print("get globals")
    sym_table_list = get_sym_table(compiled_program)
    for sym_entry in sym_table_list:
        if sym_entry["Type"] == "OBJECT" and sym_entry["Vis"] == "DEFAULT":
            g.append(sym_entry["Name"])
    return g

# gets the global variables by taking every variable name g_x
def get_globals_primitive(program):
    g = []
    # print("get globals")
    for line in program.code.splitlines():
        if "reads" in line or "writes" in line:
            for word in line.split():
                if "g_" in word and word not in g:
                    g.append(word)
    return g

def match_instruction(word, instruction):
    if instruction in word:
        return True
    return False

def match_constant(word):
    if "$" in word:
        return True
    return False

def match_global(word, g):
    g = g + "(%rip)"
    if word == g:
        return True
    return False

def check_constant_move(g, assembly):
    result = False
    lines = []
    for line in assembly.splitlines():
        words = line.split()
        if len(words) == 3:
            temp = match_instruction(words[0], "mov") and match_constant(words[1]) and  match_global(words[2], g)
            result = result or temp
            if temp:
                lines.append(words)
    return result, lines

def filter(program, setting1, setting2, globals):
    setting1_result = setting1.compile_program(program, ASMCompilationOutput(None))
    setting2_result = setting2.compile_program(program, ASMCompilationOutput(None))
    setting1_assembly = setting1_result.output.read()
    setting2_assembly = setting2_result.output.read()
    interesting = False
    interesting_variables = []
    report_num = len(os.listdir("../reports"))
    report = Report("report_" + str(report_num), program, setting1, setting1_assembly, setting2, setting2_assembly)
    # do comparison
    for g in globals:
        setting1_constant_bool, setting1_constant_lines = check_constant_move(g, setting1_assembly)
        setting2_constant_bool, setting2_constant_lines = check_constant_move(g, setting2_assembly)
        if not setting1_constant_lines == setting2_constant_lines:
            report.add_interesting_variable(g, setting1_constant_lines, setting2_constant_lines)
            interesting = True
    if interesting:
        print("Interesting")
        program.save_to_file("../programs/program_" + str(report_num))
        report.save_to_file()
    else:
        del report
    return

# get the substring in s that lies between a and b
def get_between(s, a , b):
    i = s.find(a) + len(a)
    j = s.find(b)
    return s[i:j]

# get GlobalEntry object by checking existing objects
def get_var_obj(variables, name):
    new = True
    for var in variables:
        if var.name == name:
            return var, False
    return Global_Entry(name, []), new

# check if block reads or writes to a global variable
def check_block(block, g_map):
    categories = ["const_write", "reg_write", "glb_read"]
    constant = False
    write = False
    value = None
    block_report = []
    variables = []
    # iterate through every instruction
    for index in range(len(block)):
        instr = block[index]
        op_str = instr.op_str
        # check if a instruction performs a move operation on a global variable (rip-relative address)
        if "[rip + " in op_str and "]" in op_str and (index + 1) < len(block) and instr.mnemonic == "mov":
            # compute absolute address = rip-relative addresss + address of next instruction
            rip_rel_addr = get_between(op_str, "[rip + 0x", "]")
            next_addr = hex(block[index + 1].address)
            abs_addr = hex(int(rip_rel_addr, 16) + int(next_addr, 16))
            addr_str = "[rip + 0x" + rip_rel_addr + "]"
            op_str_list = op_str.split(",")
            # check if it is a constant write, register write or a read
            if addr_str in op_str_list[0]:
                write = True
                arg = op_str_list[1]
                if "0x" in arg:
                    constant = True
                    value = int(arg, base=16)
                else:
                    try:
                        value = int(arg)
                        constant = True
                    except:
                        value = None
                        constant = False
            elif addr_str in op_str_list[1]:
                constant = True
                value = None
            # check if it the address is a global variable from our var-address map (g_map)
            if abs_addr in g_map:
                # store the instruction and its properties to the object
                var_obj, new = get_var_obj(variables, g_map[abs_addr])
                instr_obj = Instruction_Entry(instr.mnemonic, op_str_list, constant, write, value)
                var_obj.instructions.append(instr_obj)
                if new:
                    variables.append(var_obj)
    return variables

# creates dictionary that maps global variables to their address in the executable
def addr_map(project, globals):
    g_map = {}
    for g in globals:
        g_symbol = project.loader.find_symbol(g)
        if g_symbol == None:
            # print(g + " is not a true global variable")
            continue
        else:
            g_map[hex(g_symbol.rebased_addr)] = g
            # print(g_symbol)
    return g_map


# performs all the analysis on the binary
def binary_analysis(project, globals, dir_name, setting_str):
    # produce map of global variable names to their address in the executable file
    g_map = addr_map(project, globals)
    # compute CFG
    try:
        cfg = project.analyses.CFGEmulated()
    except StopIteration as e:
        print("ERROR: CFG was not generated")
        print(e)
        f = open(dir_name + "/" + setting_str + ".csv", "w")
        f.write("ERROR: CFG was not generated")
        f.close()
        return True
    # print(cfg.graph)
    nodes = cfg.nodes()
    nodes_ext = []
    # iterate through every node
    for node in nodes:
        if node.name == None:
            # print("node is none")
            continue
        # get assembly code of node
        addr = node.addr
        block = project.factory.block(addr=addr).capstone.insns
        # check block if it writes or reads a global variable
        variables = check_block(block, g_map)
        node_ext = Node_Extended(node, variables)
        nodes_ext.append(node_ext)
        # print(node_ext.to_string())
    table = "name, constant_write, var_write, read\n"
    for g in globals:
        constant_num = 0
        var_num = 0
        read_num = 0
        for node_ext in nodes_ext:
            _, num = node_ext.has_constant_write(g)
            constant_num += num
            _, num = node_ext.has_var_write(g)
            var_num += num
            _, num = node_ext.has_read(g)
            read_num += num
        table = table + g + ", " + str(constant_num) + ", " + str(var_num) + ", " + str(read_num) + "\n"
    f = open(dir_name + "/" + setting_str + ".csv", "w")
    f.write(table)
    f.close()
    return False        
    # TODO analyse results from dfs and look which successor/predecessor relations write constants to a global variable

# compiles program and creates a angr-project
def compile_globals_project(program, setting):
    compiled_program = setting.compile_program(program, ExeCompilationOutput(None))
    project = angr.Project(compiled_program.output.filename, load_options={'auto_load_libs': False})
    # globals = get_globals_primitive(program) + ["global"]
    globals = get_globals(compiled_program)
    return compiled_program, project, globals
    
if __name__ == "__main__":
    program_num = 1000
    program_list = []
    csmith = True
    if len(sys.argv) > 1:
        print("test program is availbable")
        program_list = sys.argv[1:]
        program_num = len(program_list)
        csmith = False

    counter = 0
    while(counter < program_num or program_num == -1):
        start_time = time.time()
        if csmith:
            # generate random csmith program
            sanitizer = Sanitizer()
            program = CSmithGenerator(sanitizer).generate_program()
        else:
            # read program from path and write to SourceProgram object
            path = PROGRAM_PATH + program_list[counter]
            if os.path.exists(path):
                f = open(path, "r")
                program = SourceProgram(
                    code=f.read(),
                    language=Language.C,
                    defined_macros=(),
                    include_paths=(),
                    system_include_paths=(),
                    flags=(),)
                f.close()
            else:
                print(path + " does not exist.")
        dir_name = "../data/program_" + str(counter)
        while(True):
            try:
                os.mkdir(dir_name)
                break
            except:
                counter += 1
                dir_name = "../data/program_" + str(counter)
        program.save_to_file(dir_name + "/program")
        for setting in settings:
            setting_json = setting.to_json_dict()
            setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
            print(setting_str)
            compiled, project, globals = compile_globals_project(program, setting)
            binary_analysis(project, globals, dir_name, setting_str)
        counter += 1
        end_time = time.time()
        runtime = end_time - start_time
        print(str(counter) + ": time: " + str(int(runtime)) + " seconds")
    print("SUCCESS")