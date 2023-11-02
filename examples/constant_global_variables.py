#!/usr/bin/env python3

import sys
import os
sys.path.insert(0, '/home/colin/Dokumente/ETH/Master_Thesis/diopter/')

from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
    ObjectCompilationOutput,
    OptLevel,
    SourceProgram,
    Language,
)
from diopter.generator import CSmithGenerator
from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer

PROGRAM_PATH = "../program_examples/"

if __name__ == "__main__":
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
            print("generate csmith program")
            sanitizer = Sanitizer()
            program = CSmithGenerator(sanitizer).generate_program()
        else:
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
            else:
                print(path + " does not exist.")
        print(program.code)
        counter += 1
    
    print("SUCCESS")