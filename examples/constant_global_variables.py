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
    print("get globals")

def check_lines_for_g(g, assembly):
    for line in assembly.splitlines():
        if g in line and "mov" in line:
            print(line)

def filter(program, setting1, setting2, globals):
    setting1_result = setting1.compile_program(program, ASMCompilationOutput(None))
    setting2_result = setting2.compile_program(program, ASMCompilationOutput(None))
    setting1_assembly = setting1_result.output.read()
    setting2_assembly = setting2_result.output.read()
    # do comparison
    for g in globals:
        print("O0")
        check_lines_for_g(g, setting1_assembly)
        print("O3")
        check_lines_for_g(g, setting2_assembly)

if __name__ == "__main__":

    O3 = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )
    O0 = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.O0,
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
        program.save_to_file("../temp_programs/sample" + str(counter))
        # globals = get_globals(program)
        globals = ["global"]
        filter(program, O0, O3, globals)
        counter += 1
    
    print("SUCCESS")