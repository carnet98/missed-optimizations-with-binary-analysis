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

import argparse

# global variables
PROGRAM_PATH = "../program_examples/"
TOOL_BINARY_PATH = "../clang_tools/build/bin/"



def main():
    program_num = 10000
    program_list = []
    csmith = True
    gcc_path = "/usr/bin/gcc"
    clang_path = "/usr/bin/clang"
    parser = argparse.ArgumentParser(
                    prog='Constant Global Variables',
                    description='Performs binary analysis. Checks if global variables are written with a constant value, variable value (register) or read')
    parser.add_argument("--sample")
    parser.add_argument("--clang_path")
    parser.add_argument("--gcc_path")
    args = parser.parse_args()
    if not args.sample == None:
        print("test program is available")
        program_list = [args.sample]
        program_num = len(program_list)
        csmith = False
    if not args.clang_path == None:
        try:
            compiler_exe = CompilerExe.from_path(args.clang_path)
            clang_path = args.clang_path
        except:
            print("not valid clang compiler executable. taking default")

    if not args.gcc_path == None:
        try:
            compiler_exe = CompilerExe.from_path(args.gcc_path)
            gcc_path = args.gcc_path
        except:
            print("not valid gcc compiler executable. taking default")

    print("gcc path: " + gcc_path)
    print("clang path: " + clang_path)

    gcc_0 = CompilationSetting(
        compiler=CompilerExe.from_path(gcc_path),
        opt_level=OptLevel.O0,
        flags=("-march=native",),
    )
    gcc_1 = CompilationSetting(
        compiler=CompilerExe.from_path(gcc_path),
        opt_level=OptLevel.O1,
        flags=("-march=native",),
    )
    gcc_2 = CompilationSetting(
        compiler=CompilerExe.from_path(gcc_path),
        opt_level=OptLevel.O2,
        flags=("-march=native",),
    )
    gcc_3 = CompilationSetting(
        compiler=CompilerExe.from_path(gcc_path),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )

    gcc_settings = [gcc_0, gcc_1, gcc_2, gcc_3]

    clang_0 = CompilationSetting(
        compiler=CompilerExe.from_path(clang_path),
        opt_level=OptLevel.O0,
        flags=("-march=native",),
    )
    clang_1 = CompilationSetting(
        compiler=CompilerExe.from_path(clang_path),
        opt_level=OptLevel.O1,
        flags=("-march=native",),
    )
    clang_2 = CompilationSetting(
        compiler=CompilerExe.from_path(clang_path),
        opt_level=OptLevel.O2,
        flags=("-march=native",),
    )
    clang_3 = CompilationSetting(
        compiler=CompilerExe.from_path(clang_path),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
    )

    clang_settings = [clang_0, clang_1, clang_2, clang_3]
    settings = gcc_settings + clang_settings

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
        node_num = {}
        edge_num = {}
        for setting in settings:
            setting_str = binary_analysis_utils.setting_str_f(setting)
            print(setting_str)
            compiled, project, globals = binary_analysis_utils.compile_globals_project(program, setting)
            try:
                cfg = binary_analysis_utils.get_cfg(project)
                node_num[setting_str] = len(cfg.graph.nodes)
                edge_num[setting_str] = len(cfg.graph.edges)
                data = binary_analysis_utils.variable_analysis(project, cfg, globals)
                data.to_csv(dir_name + "/" + setting_str + ".csv", sep=",", index=False)
            except:
                print("EXCEPTION")
                continue
        try:
            clang_3_str = binary_analysis_utils.setting_str_f(clang_3)
            gcc_3_str = binary_analysis_utils.setting_str_f(gcc_3)
            node_ratio = node_num[clang_3_str] / node_num[gcc_3_str]
            edge_ratio = edge_num[clang_3_str] / edge_num[gcc_3_str]
            ratio_str = "node ratio," + str(node_ratio) + "\nedge ratio," + str(edge_ratio)
            f = open(dir_name + "/cfg_data.txt", "w")
            f.write(ratio_str)
            f.close()
        except:
            print("ERROR: ratio not calculated")
        counter += 1
        end_time = time.time()
        runtime = end_time - start_time
        print(str(counter) + ": time: " + str(int(runtime)) + " seconds")
    
    print("SUCCESS")


if __name__ == "__main__":
    main()
