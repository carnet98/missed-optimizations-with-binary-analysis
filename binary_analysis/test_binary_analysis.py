#!/usr/bin/env python3

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
from diopter.generator import CSmithGenerator
from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer

from static_globals.instrumenter import annotate_with_static

import binary_analysis_utils

import subprocess

import angr

import time

import pandas as pd

from enum import Enum

import argparse

def main():
    gcc_path = "/usr/bin/gcc"
    clang_path = "/usr/bin/clang"
    gcc = CompilationSetting(
        compiler=CompilerExe.from_path(gcc_path),
        opt_level=OptLevel.O0,
        flags=("-march=native",),
    )

    clang = CompilationSetting(
        compiler=CompilerExe.from_path(clang_path),
        opt_level=OptLevel.O0,
        flags=("-march=native",),
    )
    settings = [gcc, clang]

    PROGRAM_PATH = "../program_examples/"

    parser = argparse.ArgumentParser(
                    prog='Reduced Program Binary Analysis',
                    description='Performs binary analysis. Checks if global variables are written with a constant value, variable value (register) or read. Compares the binaries and reduces the programs to a smaller size')
    parser.add_argument("--sample")
    parser.add_argument("--clang_path")
    parser.add_argument("--gcc_path")
    args = parser.parse_args()
    if not args.sample == None:
        print("test program is available")
        program_file = args.sample
    else:
        print("test proram is not available")
        return
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

    path = PROGRAM_PATH + program_file
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
        print(path + " does not exist")
        
    # test code; try and test funcitons from binary analysis utils
    print(program.code)
    globals_list = []
    setting_data_dict = {}
    for setting in settings:
        temp_program = setting.preprocess_program(program, make_compiler_agnostic=True)
        compiled, project, globals = binary_analysis_utils.compile_globals_project(temp_program, setting)
        globals_list.append(globals)
        cfg = binary_analysis_utils.get_cfg(project)
        nodes_ext = binary_analysis_utils.get_cfg_info(project, cfg, globals)
        print(binary_analysis_utils.setting_str_f(setting))
        for node_ext in nodes_ext:
            print(node_ext.to_string())
        # data = binary_analysis_utils.extended_variable_analysis(project, cfg, globals)

if __name__ == "__main__":
    main()