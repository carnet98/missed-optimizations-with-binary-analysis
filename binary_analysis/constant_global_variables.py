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

import binary_analysis_utils

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
    
if __name__ == "__main__":
    program_num = 100
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
        binary_analysis_utils.save_program(program, dir_name + "/program")
        for setting in settings:
            setting_json = setting.to_json_dict()
            setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
            print(setting_str)
            compiled, project, globals = binary_analysis_utils.compile_globals_project(program, setting)
            try:
                data = binary_analysis_utils.binary_analysis(project, globals)
                data.to_csv(dir_name + "/" + setting_str + ".csv", sep=",", index=False)
            except:
                continue
        counter += 1
        end_time = time.time()
        runtime = end_time - start_time
        print(str(counter) + ": time: " + str(int(runtime)) + " seconds")
    print("SUCCESS")