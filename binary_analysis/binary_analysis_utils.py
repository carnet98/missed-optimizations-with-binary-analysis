import sys

import os

sys.path.insert(0, os.getcwd() + "/..")

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

import angr

import subprocess

import pandas as pd

# save program into file
def save_program(program, filename):
    filename = filename + program.language.to_suffix()
    f = open(filename, "w")
    f.write(program.code)
    f.close()

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

    def has_write(self, g):
        const_write, _ = self.has_constant_write(g)
        var_write, _ = self.has_var_write(g)
        return const_write or var_write

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
def get_between(s, a, b):
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
        add_instr = False
        instr = block[index]
        op_str = instr.op_str
        # check if a instruction performs a move operation on a global variable (rip-relative address)
        if "[rip + " in op_str and "]" in op_str and (index + 1) < len(block):
            # compute absolute address = rip-relative addresss + address of next instruction
            rip_rel_addr = get_between(op_str, "[rip + 0x", "]")
            next_addr = hex(block[index + 1].address)
            abs_addr = hex(int(rip_rel_addr, 16) + int(next_addr, 16))
            addr_str = "[rip + 0x" + rip_rel_addr + "]"
            op_str_list = op_str.split(",")
            if instr.mnemonic == "lea" or instr.mnemonic == "cmp":
                add_instr = True
                constant = False
                write = False
            if instr.mnemonic == "mov":
                add_instr = True
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
                    constant = False
                    value = None
                # check if it the address is a global variable from our var-address map (g_map)
            if add_instr and abs_addr in g_map:
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

def get_cfg_info(project, cfg, globals):
    g_map = addr_map(project, globals)
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
    return nodes_ext

# check if cfg contains an infinite loop
# infinite loop: node with only one successor which is itself
def check_loop(cfg):
    nodes = cfg.nodes()
    for node in nodes:
        successors = node.successors
        if len(successors) == 1 and successors[0] == node:
            return True
    return False

# get cfg of program
def get_cfg(project):
    try: 
        cfg = project.analyses.CFGEmulated()
        return cfg
    except StopIteration as e:
        print("ERROR: CFG was not generated")
        print(e)
        raise Exception("ERROR: CFG was not generated")

# performs all the analysis on the binary
def binary_analysis(project, cfg, globals):
    # produce map of global variable names to their address in the executable file
    nodes_ext = get_cfg_info(project, cfg, globals)
    df = pd.DataFrame(columns=["var_name", "constant_write", "var_write", "read"])
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
        df.loc[len(df)] = [g, constant_num, var_num, read_num]
    return df

# check if there is a path from node_1 to node_2. with BFS.
def get_path(node_1, node_2, nodes):
    print("get path between " + node_1.name + " and " + node_2.name)
    visited = {}
    parents = {}
    for node in nodes:
        visited[node] = False
        parents[node] = None
    visited[node_1] = True
    queue = [node_1]
    while queue:
        current = queue.pop()
        if current == node_2:
            # reconstruct path
            path = [current]
            while parents[current]:
                current = parents[current]
                path.insert(0, current)
            return path, True
        for successor in current.successors:
            if visited[successor] == False:
                queue.append(successor)
                visited[successor] = True
                parents[successor] = current
    return None, False

# check for every write operation if there is a read operation after it.
def extended_binary_analysis(project, cfg, globals):
    nodes_ext = get_cfg_info(project, cfg, globals)
    interesting_globals = []
    no_read_after_write = 0
    for g in globals:
        write_nodes = []
        read_nodes = []
        for node_ext in nodes_ext:
            write = node_ext.has_write(g)
            if write:
                write_nodes.append(node_ext)
            read, _ = node_ext.has_read(g)
            if read:
                read_nodes.append(node_ext)
        '''
        print("write nodes:")
        for write_node in write_nodes:
            print(write_node.node.name)
        print("read nodes:")
        for read_node in read_nodes:
            print(read_node.node.name)
        '''
        for write_node in write_nodes:
            for read_node in read_nodes:
                _, path_bool = get_path(write_node.node, read_node.node, cfg.nodes())
                if not path_bool:
                    no_read_after_write += 1
    return no_read_after_write

# compiles program and creates a angr-project
def compile_globals_project(program, setting):
    compiled_program = setting.compile_program(program, ExeCompilationOutput(None))
    project = angr.Project(compiled_program.output.filename, load_options={'auto_load_libs': False})
    # globals = get_globals_primitive(program) + ["global"]
    globals = get_globals(compiled_program)
    return compiled_program, project, globals