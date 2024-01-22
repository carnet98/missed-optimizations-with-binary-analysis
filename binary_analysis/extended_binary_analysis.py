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

class WriteReadPaths(ReductionCallback):
    def __init__(self, sanitizer, settings):
        self.sanitizer = sanitizer
        self.settings = settings
        self.dir = "../data/temp_reduce"

    def test(self, program: SourceProgram) -> bool:
        if not self.sanitizer.sanitize(program):
            return False
        return filter(program, self.settings)

def setting_str_f(setting):
    setting_json = setting.to_json_dict()
    setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
    return setting_str

def filter(program, settings):
    setting_data_dict = {}
    program = annotate_with_static(program)
    for setting in settings:
        compiled, project, globals = binary_analysis_utils.compile_globals_project(program, setting)
        cfg = binary_analysis_utils.get_cfg(project)
        no_read_after_write = binary_analysis_utils.extended_binary_analysis(project, cfg, globals)
        if no_read_after_write > 0:
            return True
    return False

def main():
    gcc_path = "/usr/bin/gcc"
    clang_path = "/usr/bin/clang"
    PROGRAM_PATH = "../program_examples/"
    program_num = 10
    program_list = []
    csmith = True

    parser = argparse.ArgumentParser(
                    prog='Reduced Program Binary Analysis',
                    description='Performs binary analysis. Checks if global variables are written with a constant value, variable value (register) or read. Compares the binaries and reduces the programs to a smaller size')
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
    settings = [clang_3, gcc_3]

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
        dir_name = "../data3/program_" + str(counter)
        interesting = filter(program, settings)
        if interesting:
            while(True):
                print("infinite loop")
                os.mkdir(dir_name)
                break
            # program.save_to_file(dir_name + "/program_" + str(counter))
            binary_analysis_utils.save_program(program, dir_name + "/program_" + str(counter))
            print("berfore reduce")
            # reduce
            sanitizer = Sanitizer()
            rprogram = Reducer().reduce(program, WriteReadPaths(sanitizer, settings), jobs=16, debug=True)
            # rprogram = annotate_with_static(rprogram)
            if not rprogram == None:
                binary_analysis_utils.save_program(rprogram, dir_name + "/reduced_program_" + str(counter))
            else:
                print("reduction failed for program_" + str(counter))
            
        end_time = time.time()
        runtime = end_time - start_time
        print(str(counter) + ": time: " + str(int(runtime)) + " seconds")
    print("SUCCESS")


if __name__ == "__main__":
    main()