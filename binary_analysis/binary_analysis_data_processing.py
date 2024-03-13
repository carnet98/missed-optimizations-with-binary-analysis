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

import pandas as pd

from enum import Enum

from constant_global_variables import *

import binary_analysis_utils

import extended_variable_binary_analysis

import variable_binary_analysis

import path_binary_analysis

import cfg_binary_analysis

import argparse

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

def setting_str_f(setting):
    setting_json = setting.to_json_dict()
    setting_str = setting_json["compiler"]["project"] + "_" + setting_json["opt_level"]
    return setting_str

# get list of setting str
def settings_str():
    result = []
    for setting in settings:
        setting_str = setting_str_f(setting)
        result.append(setting_str)
    return result

# setting report object, storing info for each setting over all programs
class SettingReport():
    def __init__(self, setting, setting_str, data):
        self.setting = setting
        self.setting_str = setting_str
        self.data = data

# setup setting reports
def setup_setting_reports(settings):
    setting_reports = []
    for setting in settings:
        setting_str = setting_str_f(setting)
        data = pd.DataFrame(columns=["program_name", "constant_write", "var_write", "read"])
        setting_reports.append(SettingReport(setting, setting_str, data))
    return setting_reports

# get setting object with file name (without file extension)
def get_setting(name):
    for setting in settings:
        setting_str = setting_str_f(setting)
        if setting_str == name:
            return setting
    raise Exception("no setting found for file: " + name)

# get file with a setting_str
def get_file(setting_str, files):
    for file in files:
        file_split = file[:-4].split("_")
        setting_split = setting_str.split("_")
        if file_split[0] == setting_split[0] and file_split[len(file_split) - 1] == setting_split[len(setting_split) - 1]:
            return file
    raise Exception("no file found for setting: " + setting_str)

# check if file have content
def check_files(dir_path, files):
    clean = True
    for file in files:
        if file.endswith(".csv"):
            f = open(dir_path + "/" + file, "r")
            content = f.read()
            f.close()
            if content == "ERROR: CFG was not generated":
                clean = False
    return clean

# for each setting get the corresponding dataframe and store in dict with setting_str as key
def get_file_df_dict(dir_path, files):
    result = {}
    for setting_str in settings_str():
        try:
            file = get_file(setting_str, files)
        except:
            continue
        file_df = pd.read_csv(dir_path + "/" + file, sep=", ", engine="python")
        result[setting_str] = file_df
    return result

# count the accesses for a certain setting, fill up the setting reports with the data of one program
def count_accesses_for_setting(dir_path, setting_reports):
    files = os.listdir(dir_path)
    program_name = dir_path.split("/")[-1]
    for setting_report in setting_reports:
        setting = setting_report.setting
        data = setting_report.data
        # print(df)
        try:
            file = get_file(setting_report.setting_str, files)
        except:
            continue
        file_df = pd.read_csv(dir_path + "/" + file, sep=",", engine="python")
        const_write_num = 0
        var_write_num = 0
        read_num = 0
        for i in file_df.index:
            const_write_num += file_df['constant_write'][i]
            var_write_num += file_df['var_write'][i]
            read_num += file_df['read'][i]
        data.loc[len(data)] = [program_name, const_write_num, var_write_num, read_num]

# compute the accesses for all programs over all settigns and store in report dataframe
def total_accesses_for_setting(setting_reports, df):
    for report in setting_reports:
        data = report.data
        const_write_num = 0
        var_write_num = 0
        read_num = 0
        for i in data.index:
            const_write_num += data['constant_write'][i]
            var_write_num += data['var_write'][i]
            read_num += data['read'][i]
        access_num = const_write_num + var_write_num + read_num
        const_write_percent = (const_write_num / access_num) * 100
        var_write_percent = (var_write_num / access_num) * 100
        read_percent = (read_num / access_num) * 100
        df.loc[len(df)] = [report.setting_str, access_num, const_write_num, const_write_percent, var_write_num, var_write_percent, read_num, read_percent]

def get_cfg_data(programs, settings):
    counter = 0
    setting_columns = list(map(setting_str_f, settings))
    print(setting_columns)
    cfg_data = pd.DataFrame(columns=setting_columns)
    for program in programs:
        print(counter)
        setting_entry = []
        try:
            for setting in settings:
                entry = {}
                compiled_program, project, globals = binary_analysis_utils.compile_globals_project(program, setting)
                cfg = binary_analysis_utils.get_cfg(project)
                entry["nodes"] = len(cfg.graph.nodes)
                entry["edges"] = len(cfg.graph.edges)
                setting_entry.append(entry)
        except:
            print("cfg not generated")
            continue
        cfg_data.loc[counter] = setting_entry
        counter += 1
    return cfg_data

def get_interesting_data(programs, settings):
    sums = [0, 0, 0, 0, 0]
    columns = ["variable_analysis", "extended_variable_analysis", "path_analysis", "cfg_analysis", "cfg_extended_analysis"]
    interesting_data = pd.DataFrame(columns=columns)
    counter = 0
    for program in programs:
        print(counter)
        entry = []
        entry.append(variable_binary_analysis.filter(program, settings))
        entry.append(extended_variable_binary_analysis.filter(program, settings))
        entry.append(path_binary_analysis.filter(program, settings))
        entry.append(cfg_binary_analysis.filter_simple(program, settings))
        entry.append(cfg_binary_analysis.filter(program, settings))
        interesting_data.loc[counter] = entry
        counter += 1
    return interesting_data

def get_globals_data(programs, settings):
    columns = list(map(setting_str_f, settings))
    globals_data = pd.DataFrame(columns=columns)
    counter = 0
    for program in programs:
        print(counter)
        entry = []
        for setting in settings:
            compiled_program, project, globals = binary_analysis_utils.compile_globals_project(program, setting)
            entry.append(len(globals))
        globals_data.loc[counter] = entry
        counter += 1
    return globals_data
            



def main():
    gcc_path = "/usr/bin/gcc"
    clang_path = "/usr/bin/clang"

    
    dirs = os.listdir("../data/")
    # search for interesting cases and reduce the program with creduce
    limit = 10000
    counter = 0
    interesting_counter = 0

    parser = argparse.ArgumentParser(
                    prog='Binary Analysis Data Processing',
                    description='Takes all the data generated by consant_global_variables and summarizes the data into tables')
    parser.add_argument("--clang_path")
    parser.add_argument("--gcc_path")

    args = parser.parse_args()

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

    # get info about the ratios of constant, variable writes and read operations.
    
    setting_reports = setup_setting_reports(settings)
    for dir in dirs:
        print(counter)
        count_accesses_for_setting("../data/" + dir, setting_reports)
        counter += 1
        if counter > limit:
            break
    for report in setting_reports:
        report_str = report.data.to_string()
        f = open("../evaluation/" + report.setting_str + "_report.txt", "w")
        f.write(report_str)
        f.close
    report = pd.DataFrame(columns=["Setting", "Number of Accesses", "Constant Write", "Constant Write (%)", "Variable Write", "Variable Write (%)", "Read Access", "Read Access (%)"])
    total_accesses_for_setting(setting_reports, report)
    report_str = str(counter - 1) + " samples\n" + report.to_string()
    f = open("../evaluation/report.txt", "w")
    f.write(report_str)
    f.close()
    

    # get programs
    programs = []
    for dir in dirs:
        program_path = "../data/" + dir + "/program.c"
        if os.path.exists(program_path):
            f = open(program_path, "r")
            program = SourceProgram(
                code=f.read(),
                language=Language.C,
                defined_macros=(),
                include_paths=(),
                system_include_paths=(),
                flags=(),)
            programs.append(program)
            f.close()
        else:
            print(program_path + " does not exist.")
    counter = 0

    # get info about cfgs
    cfg_data = get_cfg_data(programs, settings)
    cfg_data.to_csv("../evaluation/cfg_data.csv")
    print(cfg_data)

    # get info about interetsingness for each filter    
    interesting_data = get_interesting_data(programs, [gcc_3, clang_3])
    interesting_data.to_csv("../evaluation/interesting_data.csv")
    print(interesting_data)
    
    # get info about the numbers of globals in each binary
    globals_data = get_globals_data(programs, settings)
    globals_data.to_csv("../evaluation/globals_data.csv")
    print(globals_data)


if __name__ == "__main__":
    main()

    
    
    
    