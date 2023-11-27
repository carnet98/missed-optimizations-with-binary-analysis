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

PROGRAM_PATH = "../program_examples/"
TOOL_BINARY_PATH = "../clang_tools/build/bin/"

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

def get_globals(filename):
    # TODO run matcher on program to get a list of global variables
    g = []
    print("get globals")
    binary = TOOL_BINARY_PATH + "global-detector"
    cmd = [binary, filename, "--"]
    print(cmd)
    output = subprocess.run(cmd, capture_output=True)
    output = output.stderr.decode()
    differentWords = []
    for line in output.splitlines():
        # print("LINE")
        words = line.split()
        if (words[0] == "VarDecl"):
            if not words[len(words) - 3] in differentWords:
                differentWords.append(words[len(words) - 3])
            # print(words[len(words) - 2])
            # print(words[len(words) - 3])
            print(words)
    print(differentWords)
    return g

def get_globals_primitive(program):
    g = []
    print("get globals")
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

# check if block reads or writes to a global variable
# TODO: check if it is a constant move
def check_block(block, g_map):
    for index in range(len(block)):
        instr = block[index]
        op_str = instr.op_str
        if "[rip + " in op_str and "]" in op_str and (index + 1) < len(block):
            rip_rel_addr = get_between(op_str, "[rip + 0x", "]")
            next_addr = hex(block[index + 1].address)
            abs_addr = hex(int(rip_rel_addr, 16) + int(next_addr, 16))
            # print(abs_addr)
            # print(g_map)
            if abs_addr in g_map:
                print(g_map[abs_addr])
            
# go through the entire control-flow graph and run func on every block
# TODO: adapt algorithm to be able to go through the entire graph
def cfg_dfs(project, node, depth, g_map, func):
    addr = node.addr
    block = project.factory.block(addr=addr).capstone.insns
    print(node.name)
    func(block, g_map)
    depth += 1
    if depth > 100:
        return
    for successor in node.successors:
        cfg_dfs(project, successor, depth, g_map, func)

# creates dictionary that maps global variables to their address in the executable
def addr_map(project, globals):
    g_map = {}
    for g in globals:
        g_symbol = project.loader.find_symbol(g)
        if g_symbol == None:
            print(g + " is not a true global variable")
        else:
            g_map[hex(g_symbol.rebased_addr)] = g
            print(g_symbol)
    return g_map


def binary_analysis(program, setting, globals):
    result = setting.compile_program(program, ExeCompilationOutput(None))
    project = angr.Project(result.output.filename, load_options={'auto_load_libs': False})
    g_map = addr_map(project, globals)
    cfg = project.analyses.CFGEmulated()
    entry_node = cfg.get_any_node(project.entry)
    cfg_dfs(project, entry_node, 0, g_map, check_block)
    # TODO analyse results from dfs and look which successor/predecessor relations write constants to a global variable


if __name__ == "__main__":
    setting1 = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )
    setting2 = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )

    program_num = 2
    program_list = []
    csmith = True
    if len(sys.argv) > 1:
        print("test program is availbable")
        program_list = sys.argv[1:]
        program_num = len(program_list)
        csmith = False

    counter = 0
    while(counter < program_num or program_num == -1):
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
        # save file for matcher
        filename = program.save_to_file("../temp_programs/sample_" + str(counter))
        globals = get_globals_primitive(program) + ["global"]
        binary_analysis(program, setting1, globals)
        # binary_analysis(program, setting2, globals)
        # filter(program, setting1, setting2, globals)
        counter += 1
    print("SUCCESS")