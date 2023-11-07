#!/usr/bin/env python3

import sys
import os
sys.path.insert(0, '..')

from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
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

PROGRAM_PATH = "../program_examples/"

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
        result = result + variables + lines + source_code + assembly1 + assembly1 + assembly2
        return result
    
    def save_to_file(self):
        f = open("../reports/" + self.name + ".txt", "w")
        content = self.to_string()
        f.write(content)
        f.close()
        return

def get_globals(program):
    # TODO run matcher on program to get a list of global variables
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

if __name__ == "__main__":
    setting1 = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )
    setting2 = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )

    program_num = 10
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
        program.save_to_file("../temp_programs/sample_" + str(counter))
        globals = get_globals(program)
        globals = globals + ["global"]
        filter(program, setting1, setting2, globals)
        counter += 1
    print("SUCCESS")