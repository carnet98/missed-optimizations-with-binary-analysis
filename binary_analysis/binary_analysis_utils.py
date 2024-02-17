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

from enum import Enum

#####################################
### General Binary Analysis Tools ###
#####################################

# save program into file
def save_program(program, filename):
    filename = filename + program.language.to_suffix()
    f = open(filename, "w")
    f.write(program.code)
    f.close()

# get setting_str
def setting_str_f(setting):
    setting_json = setting.to_json_dict()
    setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"][:6] + "_" + setting_json["opt_level"]
    return setting_str

# get list of setting str
def settings_str(settings):
    result = []
    for setting in settings:
        setting_str = setting_str_f(setting)
        result.append(setting_str)
    return result

''' 
rax	eax	ax	ah and al
rcx	ecx	cx	ch and cl
rdx	edx	dx	dh and dl
rbx	ebx	bx	bh and bl
rsp	esp	sp	spl
rbp	ebp	bp	bpl
rsi	esi	si	sil
rdi	edi	di	dil
r8	r8d	r8w	r8b
r9	r9d	r9w	r9b
r10	r10d    r10w	r10b
r11	r11d	r11w	r11b
r12	r12d	r12w	r12b
r13	r13d	r13w	r13b
r14	r14d	r14w	r14b
r15	r15d	r15w	r15b
'''

X86_REGISTERS = ["rax", "eax", "ax", "ah", "al",
                "rcx", "ecx", "cx", "ch", "cl",
                "rdx", "edx", "dx", "dh", "dl",
                "rbx", "ebx", "bx", "bh", "bl",
                "rsp", "esp", "sp", "spl",
                "rbp", "ebp", "bp", "bpl",
                "rsi", "esi", "si", "sil",
                "rdi", "edi", "di", "dil",
                "r8", "r8d", "r8w", "r8b",
                "r9", "r9d", "r9w", "r9b",
                "r10", "r10d", "r10w", "r10b",
                "r11", "r11d", "r11w", "r11b",
                "r12", "r12d", "r12w", "r12b",
                "r13", "r13d", "r13w", "r13b",
                "r14", "r14d", "r14w", "r14b",
                "r15", "r15d", "r15w", "r15b"]


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
class Var_Entry():
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

    def get_variable(self, g):
        for var in self.globals:
            if var.name == g:
                return var

    def has_constant_write(self, g):
        result = False
        instructions = []
        num = 0
        for var in self.globals:
            if var.name == g:
                for instr in var.instructions:
                    if instr.constant and instr.write:
                        result = True
                        instructions.append(instr)
                        num += 1
        return result, num, instructions
    
    def has_var_write(self, g):
        result = False
        instructions = []
        num = 0
        for var in self.globals:
            if var.name == g:
                for instr in var.instructions:
                    if not instr.constant and instr.write:
                        result = True
                        instructions.append(instr)
                        num += 1
        return result, num, instructions

    def has_read(self, g):
        result = False
        instructions = []
        num = 0
        for var in self.globals:
            if var.name == g:
                for instr in var.instructions:
                    if not instr.write:
                        result = True
                        instructions.append(instr)
                        num += 1
        return result, num, instructions

    def has_write(self, g):
        const_write, const_num, const_instructions = self.has_constant_write(g)
        var_write, var_num, var_instructions = self.has_var_write(g)
        return (const_write or var_write), (const_num + var_num), (const_instructions + var_instructions)

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
    for var in variables:
        if var.name == name:
            return var, False
    return Var_Entry(name, []), True

# check if operand is register
def check_register(op):
    for register in X86_REGISTERS:
        if register == op:
            return register
    return None

# check if operand is global variable
def check_global(op, block, g_map, index):
    name = None
    if "[rip + " in op and "]" in op and (index + 1) < len(block):
        rip_rel_addr = get_between(op, "[rip + 0x", "]")
        next_addr = hex(block[index + 1].address)
        abs_addr = hex(int(rip_rel_addr, 16) + int(next_addr, 16))
        if abs_addr in g_map:
            name = g_map[abs_addr]
    return name

# handle operand give out variable name, register name or constant value or None
def handle_op(op, block, g_map, index):
    output = check_global(op, block, g_map, index)
    if output:
        return "var", output
    output = check_register(op)
    if output:
        return "var", output
    if op.startswith('0x'):
        output = int(op, base=16)
        return "num", output
    try:
        output = int(op)
        return "num", output
    except:
        print("exception none")
        return "none", None 
    
# check if block read or writes (constantly) to/from register or global variable
def check_block(block, g_map):
    variables = []
    for index in range(len(block)):
        add_instr = False
        instr = block[index]
        op_str_list = instr.op_str.split(", ")
        mnemonic = instr.mnemonic
        operands = []
        if len(op_str_list) == 2:
            fst_op = op_str_list[0] # write operand
            snd_op = op_str_list[1] # read operand
            # get info if operand is register, global variable, constant or none
            cat1, value1 = handle_op(fst_op, block, g_map, index)
            cat2, value2 = handle_op(snd_op, block, g_map, index)
            var_obj_1 = None
            var_obj_2 = None
            # check if operand is register or global variable and get the variable object
            # add the variable object if it is a variable not seen before
            if cat1 == "var":
                var_obj_1, new1 = get_var_obj(variables, value1)
                if new1:
                    variables.append(var_obj_1)
            if cat2 == "var":
                var_obj_2, new2 = get_var_obj(variables, value2)
                if new2:
                    variables.append(var_obj_2)
            # TODO: Do a switch for the instructions
            # handle lea and cmp instruction cases
            if mnemonic == "lea" or mnemonic == "cmp":
                constant = False
                value = None
                if var_obj_1:
                    if cat2 == "num":
                        constant = True
                    instr_obj = Instruction_Entry(mnemonic, op_str_list, constant, False, value2)
                    var_obj_1.instructions.append(instr_obj)
                constant = False
                value = None
                if var_obj_2:
                    if cat1 == "num":
                        constant = True
                    instr_obj = Instruction_Entry(mnemonic, op_str_list, constant, False, value1)
                    var_obj_2.instructions.append(instr_obj)
            # handle mov instructions
            if mnemonic == "mov":
                constant = False
                if var_obj_1:
                    if cat2 == "num":
                        constant = True
                    instr_obj = Instruction_Entry(mnemonic, op_str_list, constant, True, value2)
                    var_obj_1.instructions.append(instr_obj)
                constant = False
                if var_obj_2:
                    instr_obj = Instruction_Entry(mnemonic, op_str_list, constant, False, value1)
                    var_obj_2.instructions.append(instr_obj)
            if mnemonic == "xor":
                constant = False
                if var_obj_1 and var_obj_2 and var_obj_1 == var_obj_2:
                    constant = True
                    instr_obj = Instruction_Entry(mnemonic, op_str_list, constant, True, 0)
                    var_obj_1.instructions.append(instr_obj)
            # TODO: handle other instructions            
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

#####################################
#### Code for Varbiable Analysis ####
#####################################

# Entry Option object: Options for data table
class EntryOption(Enum):
    none = 0
    zero = 1
    constant = 2
    variable = 3
    mixed = 4
    read = 5

    @staticmethod
    def from_str(s: str):
        match s:
            case "none":
                return EntryOption.none
            case "zero":
                return EntryOption.zero
            case "constant":
                return EntryOption.constant
            case "variable":
                return EntryOption.variable
            case "mixed":
                return EntryOption.mixed
            case "read":
                return EntryOption.read
        raise ValueError(f"{s} is not a valid table entry")

# get intersection from multiple lists of globals
def global_intersection(globals_list):
    result = list(set.intersection(*map(set, globals_list)))
    return result

# get a complete list of all relevant variables
def get_complete_var_list(file_df_dict):
    var_list = []
    for setting_str, df in file_df_dict.items():
        for name in df["var_name"]:
            if not name in var_list:
                var_list.append(name)
    print(var_list)
    return var_list

# generate entry for each variable that has info for each setting
def get_var_info(var, file_df_dict, columns):
    entry = {}
    for column in columns:
        if column == "var_name":
            entry[column] = var
        else:
            file_df = file_df_dict[column]
            row = file_df.loc[file_df["var_name"] == var]
            # print(file_df)
            if row.empty:
                entry[column] = "none"
            else:
                const_write_bool = row.iloc[0]["constant_write"] > 0
                var_write_bool = row.iloc[0]["var_write"] > 0
                read_bool = row.iloc[0]["read"] > 0
                if not const_write_bool and not var_write_bool and not read_bool:
                    entry[column] = "zero"
                elif const_write_bool and not var_write_bool:
                    entry[column] = "constant"
                elif not const_write_bool and var_write_bool:
                    entry[column] = "variable"
                elif not const_write_bool and not var_write_bool and read_bool:
                    entry[column] = "read"
                else:
                    entry[column] = "mixed"
    return entry

# check how variables are accessed for each setting
def data_transform_variables(setting_data_dict, settings):
    var_list = get_complete_var_list(setting_data_dict)
    df = pd.DataFrame(columns=["var_name"] + settings_str(settings))
    for var in var_list:
         entry = get_var_info(var, setting_data_dict, df.columns)
         df.loc[len(df)] = entry
    # print(df)
    return df

def get_data_from_nodes_ext(nodes_ext, globals):
    df = pd.DataFrame(columns=["var_name", "constant_write", "var_write", "read"])
    for g in globals:
        constant_num = 0
        var_num = 0
        read_num = 0
        for node_ext in nodes_ext:
            _, num, _ = node_ext.has_constant_write(g)
            constant_num += num
            _, num, _ = node_ext.has_var_write(g)
            var_num += num
            _, num, _ = node_ext.has_read(g)
            read_num += num
        df.loc[len(df)] = [g, constant_num, var_num, read_num]
    return df


# performs variable analysis only on global variables
def variable_analysis(project, cfg, globals):
    # produce map of global variable names to their address in the executable file
    nodes_ext = get_cfg_info(project, cfg, globals)
    df = get_data_from_nodes_ext(nodes_ext, globals)
    return df

# check interestingness by evaluating the data gathered from binary analysis
def interesting_filter(setting_data_dict, settings):
    if not len(settings) == 2:
        print("ERROR: interesting filter only works with two settings you got " + str(len(settings)))
        raise Exception
    data = data_transform_variables(setting_data_dict, settings)
    # check interestingness for now only clang O3 vs gcc O3
    interesting = False
    # print(data)
    for row in data.to_dict(orient='records'):
        setting1 = settings[0]
        setting2 = settings[1]
        setting_str1 = setting_str_f(setting1)
        setting_str2 = setting_str_f(setting2)
        entry1 = EntryOption.from_str(row[setting_str1])
        entry2 = EntryOption.from_str(row[setting_str2])
        # compiler1 = setting1.compiler.project
        # compiler2 = setting2.compiler.project
        # optimization1 = setting1.opt_level
        # optimization2 = setting2.opt_level
        if entry1.name == "constant" and (entry2.name == "variable" or entry2.name == "mixed"):
            """
            print("interesting")
            print(row["var_name"])
            print(setting_str1)
            print(entry1.name)
            print(setting_str2)
            print(entry2.name)
            """
            interesting = True
        if entry2.name == "constant" and (entry1.name == "variable" or entry1.name == "mixed"):
            """
            print("interesting")
            print(row["var_name"])
            print(setting_str1)
            print(entry1.name)
            print(setting_str2)
            print(entry2.name)
            """
            interesting = True
    return interesting

###########################################
### Code for Extended Variable Analysis ###
###########################################
# check if instruction_obj from block is the same as instruction_entry object
def compare_instruction_to_block(instruction_obj, instruction_block):
    op_str_list = instruction_block.op_str.split(", ")
    mnemonic = instruction_block.mnemonic
    if mnemonic == instruction_obj.op and op_str_list == instruction_obj.args:
        return True
    return False

# get index of instruction in block
def get_instruction_index(instruction, block):
    for index in range(len(block)):
        block_instr = block[index]
        if compare_instruction_to_block(instruction, block_instr):
            return index
    return -1

# looks for the latest instruction that writes to the register and then checks if it is constant
def check_node(reg, node_ext, nodes_ext, project):
    print("check_node for " + reg +  " in " + node_ext.node.name)
    write, num, instructions = node_ext.has_write(reg)
    index_dict = {}
    if not write:
        return False, False, None
    addr = node_ext.node.addr
    block = project.factory.block(addr=addr).capstone.insns
    for instruction in instructions:
        index_dict[instruction] = get_instruction_index(instruction, block)
    latest_write_instr = max(index_dict, key=index_dict.get)
    return write, latest_write_instr.constant, latest_write_instr.value

# get latest instruction that writes to the register and check if it is constant
def backtrack_reg(reg, current_instr, current_node, nodes_ext, project):
    # check node in which the original write occurs
    write, num, instructions = current_node.has_write(reg)
    if write:
        addr = current_node.node.addr
        block = project.factory.block(addr=addr).capstone.insns
        index_dict = {}
        for instruction in instructions:
            index = get_instruction_index(instruction, block)
            if index < get_instruction_index(current_instr, block):
                index_dict[instruction] = index
        if len(index_dict) > 0:
            latest_write_instr = max(index_dict, key=index_dict.get)
            if latest_write_instr.constant:
                current_instr.constant = True
            print("first node")
            return
    # check the predecessors and go back to the block that writes the variable just before it is read
    queue = current_node.get_predecessor_ext(nodes_ext)
    value_list = []
    constant_list = []
    visited = []
    while len(queue) > 0:
        current = queue.pop(0)
        if current in visited:
            continue
        visited.append(current)
        write, constant, value = check_node(reg, current, nodes_ext, project)
        if write:
            value_list.append(value)
            constant_list.append(constant)
        else:
            predecessors = current.get_predecessor_ext(nodes_ext)
            for predecessor in predecessors:
                if not predecessor in visited:
                    queue.append(predecessor)
    if len(constant_list) > 0:
        all_constant = constant_list[0]
        all_value = value_list[0]
        constant_bool = True
        for i in range(len(constant_list)):
            if not all_constant == constant_list[i]:
                constant_bool = False
            if not all_value == value_list[i]:
                constant_bool = False
        if constant_bool:
            current_instr.constant = True
    return

# get register backtrack information
def get_backtrack_info(project, cfg, globals):
    nodes_ext = get_cfg_info(project, cfg, globals)
    for g in globals:
        for node_ext in nodes_ext:
            result, _, instructions = node_ext.has_var_write(g)
            if result:
                for instruction in instructions:
                    backtrack_reg(instruction.value, instruction, node_ext, nodes_ext, project)
    return nodes_ext

def remove_unnecessary(nodes_ext, project, globals):
    for g in globals:
        print(g)
        for node_ext in nodes_ext:
            _, _, instructions = node_ext.has_write(g)
            for instr in instructions:
                var_obj = node_ext.get_variable(g)
                num_unnecessary = explore_graph(instr, node_ext, g, project, nodes_ext)
                if num_unnecessary > 0:
                    var_obj.instructions.remove(instr)
    return nodes_ext

# performs variable analysis also considering registers
def extended_variable_analysis(project, cfg, globals):
    nodes_ext = get_backtrack_info(project, cfg, globals)
    nodes_ext = remove_unnecessary(nodes_ext, project, globals)
    df = get_data_from_nodes_ext(nodes_ext, globals)
    return df
          
#####################################
###### Code for Path Analysis  ######
#####################################
def explore_graph(instr, node, g, project, nodes_ext):
    # explore own node
    addr = node.node.addr
    block = project.factory.block(addr=addr).capstone.insns
    _, _, current_write_instr = node.has_write(g)
    _, _, current_read_instr = node.has_read(g)
    current_accesses = current_write_instr + current_read_instr
    own_index = get_instruction_index(instr, block)
    # iterate through access and get earliest one that is after instr
    for current_access in current_accesses:
        index = get_instruction_index(current_access, block)
        if index > own_index:
            if current_access.write:
                # overwrite
                return 1
            else:
                return 0
    # explore successors with BFS (check all paths)
    visited = [node]
    queue = node.get_successor_ext(nodes_ext)
    value = 0
    while len(queue) > 0:
        current = queue.pop(0)
        # check if it's already visited
        if current in visited:
            continue
        else:
            visited.append(current)
        # get accesses to g in block
        addr = current.node.addr
        block = project.factory.block(addr=addr).capstone.insns
        _, _, current_write_instr = current.has_write(g)
        _, _, current_read_instr = current.has_read(g)
        current_accesses = current_write_instr + current_read_instr
        # get earliest access to g
        if len(current_accesses) > 0:
            min_instr = current_accesses[0]
            for current_access in current_accesses:
                if get_instruction_index(min_instr, block) > get_instruction_index(current_access, block):
                    min_instr = current_access
            # check if earliest instruction is a write or read (write is a overwrite, read is ok)
            # don't add successors because they are not relevant
            if min_instr.write:
                # overwrite
                value += 1
        # if no accesses in block add the successors if no successors are there then the end of the program is reached which means there is a unnecessary write
        elif len(current.get_successor_ext(nodes_ext)) > 0:
            queue = queue + current.get_successor_ext(nodes_ext)
        else:
            value += 1
    return value

# check for every write operation if there is a read operation after it.
def path_analysis(nodes_ext, globals, project):
    unnecessary_writes = {}
    for g in globals:
        writes = {}
        value = 0
        for node_ext in nodes_ext:
            _, _, instructions = node_ext.has_write(g)
            for instr in instructions:
                writes[instr] = node_ext
        for instr, node in writes.items():
            value += explore_graph(instr, node, g, project, nodes_ext)
        unnecessary_writes[g] = value
    return unnecessary_writes

# check if the unnecessary write data is interesting
def path_analysis_filter(globals, unnecessary_writes):
    result = False
    for g in globals:
        val = unnecessary_writes[0][g]
        for unnecessary_dict in unnecessary_writes:
            if not unnecessary_dict[g] == val:
                result = True
    return result

# compiles program and creates a angr-project
def compile_globals_project(program, setting):
    compiled_program = setting.compile_program(program, ExeCompilationOutput(None))
    project = angr.Project(compiled_program.output.filename, load_options={'auto_load_libs': False})
    # globals = get_globals_primitive(program) + ["global"]
    globals = get_globals(compiled_program)
    return compiled_program, project, globals