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
settings = gcc_settings + clang_settings

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
    setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
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
def setup_setting_reports():
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
        if setting_str == file[:-4]:
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
    print(program_name)
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

if __name__ == "__main__":
    setting_reports = setup_setting_reports()
    dirs = os.walk("../data")
    # search for interesting cases and reduce the program with creduce
    limit = 10000
    counter = 0
    interesting_counter = 0   
    # count accesses to global variables
    counter = 0
    for dir in dirs:
        print(counter)
        print(dir[0])
        count_accesses_for_setting(dir[0], setting_reports)
        counter += 1
        if counter > limit:
            break
    for report in setting_reports:
        report_str = report.data.to_string()
        f = open("../data/" + report.setting_str + "_report.txt", "w")
        f.write(report_str)
        f.close
    report = pd.DataFrame(columns=["Setting", "Number of Accesses", "Constant Write", "Constant Write (%)", "Variable Write", "Variable Write (%)", "Read Access", "Read Access (%)"])
    total_accesses_for_setting(setting_reports, report)
    report_str = str(counter - 1) + " samples\n" + report.to_string()
    f = open("../data/report.txt", "w")
    f.write(report_str)
    f.close()
    
    
    
    