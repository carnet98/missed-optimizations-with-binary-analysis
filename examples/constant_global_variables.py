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
    # do comparison
    for g in globals:
        setting1_constant_bool, setting1_constant_lines = check_constant_move(g, setting1_assembly)
        # print(setting1_constant_bool)
        if setting1_constant_bool:
            print("setting 1")
            print(setting1_constant_lines)
        setting2_constant_bool, setting2_constant_lines = check_constant_move(g, setting2_assembly)
        # print(setting2_constant_bool)
        if setting2_constant_bool:
            print("setting 2")
            print(setting2_constant_lines)
        if not setting1_constant_lines == setting2_constant_lines:
            interesting_variables.append(g)
            interesting = True
    if interesting:
        interesting_counter = int(len(os.listdir("../interesting_programs/")) / 2)
        program.save_to_file("../interesting_programs/interesting_" + str(interesting_counter))
        f = open("../interesting_programs/report_" + str(interesting_counter) + ".txt", "w")
        f.write("--- Interesting Case Report ---\n\n")
        f.write("Difference in Variables:" + str(interesting_variables) + "\n\n")
        f.write("\n\n")
        f.write("Setting 1: " + str(setting1.get_compilation_cmd) + "\n")
        f.write("Setting 1 Assembly Code:\n")
        f.write(setting1_assembly)
        f.write("\n\n")
        f.write("Setting 2: " + str(setting2.get_compilation_cmd) + "\n")
        f.write("Setting 2 Assembly Code:\n")
        f.write(setting2_assembly)
        f.write("\n\n")
        f.write("Source Code:\n")
        f.write(program.code)
        f.close()
    return interesting

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
        if filter(program, setting1, setting2, globals):
            print("Program is interesting")
        counter += 1
    print("SUCCESS")