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

# global variables
PROGRAM_PATH = "../program_examples/"
TOOL_BINARY_PATH = "../clang_tools/build/bin/"

gcc_path = "/usr/bin/gcc"
clang_path = "/usr/bin/clang"

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

def setting_str_f(setting):
    setting_json = setting.to_json_dict()
    setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
    return setting_str

# get list of setting str
def settings_str():
    result = []
    for setting in settings:
        setting_str = setting_str_f(setting)
        result.append(setting_str)
    return result

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

class ConstantGlobalVariables(ReductionCallback):
    def __init__(self, sanitizer, settings):
        self.sanitizer = sanitizer
        self.settings = settings
        self.dir = "../data/temp_reduce"

    def test(self, program: SourceProgram) -> bool:
        if not self.sanitizer.sanitize(program):
            return False
        return filter(program)

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
                elif const_write_bool and not var_write_bool and not read_bool:
                    entry[column] = "constant"
                elif not const_write_bool and var_write_bool and not read_bool:
                    entry[column] = "variable"
                elif not const_write_bool and not var_write_bool and read_bool:
                    entry[column] = "read"
                else:
                    entry[column] = "mixed"
    return entry

# check how variables are accessed for each setting
def data_transform_variables(setting_data_dict):
    var_list = get_complete_var_list(setting_data_dict)
    df = pd.DataFrame(columns=["var_name"] + settings_str())
    for var in var_list:
         entry = get_var_info(var, setting_data_dict, df.columns)
         df.loc[len(df)] = entry
    # print(df)
    return df

# check interestingness by evaluating the data gathered from binary analysis
def interesting_filter(setting_data_dict):
    data = data_transform_variables(setting_data_dict)
    # check interestingness for now only clang O3 vs gcc O3
    interesting = False
    # print(data)
    for row in data.to_dict(orient='records'):
        # TODO: Optimize loop to not be twice nested
        setting1 = clang_3
        setting2 = gcc_3
        setting_str1 = setting_str_f(clang_3)
        setting_str2 = setting_str_f(gcc_3)
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

# check interestingness with binary analysis
def filter(program):
    setting_data_dict = {}
    program = annotate_with_static(program)
    for setting in settings:
        compiled, project, globals = binary_analysis_utils.compile_globals_project(program, setting)
        setting_str = setting_str_f(setting)
        try:
            cfg = binary_analysis_utils.get_cfg(project)
            if binary_analysis_utils.check_loop(cfg):
                return False
            data = binary_analysis_utils.binary_analysis(project, cfg, globals)
            setting_data_dict[setting_str] = data
        except:
            return False
    return(interesting_filter(setting_data_dict))

def save_program(program, filename):
    filename = filename + program.language.to_suffix()
    f = open(filename, "w")
    f.write(program.code)
    f.close()

if __name__ == "__main__":
    program_num = 60
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
        dir_name = "../data2/program_" + str(counter)
        interesting = filter(program)
        if interesting:
            while(True):
                try:
                    os.mkdir(dir_name)
                    break
                except:
                    counter += 1
                    dir_name = "../data2/program_" + str(counter)
            # program.save_to_file(dir_name + "/program_" + str(counter))
            binary_analysis_utils.save_program(program, dir_name + "/program_" + str(counter))
            # reduce
            sanitizer = Sanitizer()
            rprogram = Reducer().reduce(program, ConstantGlobalVariables(sanitizer, settings), jobs=16)
            rprogram = annotate_with_static(rprogram)
            if not rprogram == None:
                binary_analysis_utils.save_program(rprogram, dir_name + "/reduced_program_" + str(counter))
            else:
                print("reduction failed for program_" + str(counter))  
        end_time = time.time()
        runtime = end_time - start_time
        print(str(counter) + ": time: " + str(int(runtime)) + " seconds")
    print("SUCCESS")
