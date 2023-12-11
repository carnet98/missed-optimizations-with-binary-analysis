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

class SettingReport():
    def __init__(self, setting, setting_str, data):
        self.setting = setting
        self.setting_str = setting_str
        self.data = data

def setup_setting_reports():
    setting_reports = []
    for setting in settings:
        setting_json = setting.to_json_dict()
        setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
        data = pd.DataFrame(columns=["program_name", "constant_write", "var_write", "read"])
        setting_reports.append(SettingReport(setting, setting_str, data))
    return setting_reports

def get_setting(name):
    for setting in settings:
        setting_json = setting.to_json_dict()
        setting_str = setting_json["compiler"]["project"] + "_" +  setting_json["compiler"]["revision"] + "_" + setting_json["opt_level"]
        if setting_str == name:
            return setting
    raise Exception("no setting found for file: " + name)

def get_file(setting_str, files):
    for file in files:
        if setting_str == file[:-4]:
            return file
    raise Exception("no file found for setting: " + setting_str)

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
        file_df = pd.read_csv(dir_path + "/" + file, sep=", ", engine="python")
        const_write_num = 0
        var_write_num = 0
        read_num = 0
        for i in file_df.index:
            const_write_num += file_df['constant_write'][i]
            var_write_num += file_df['var_write'][i]
            read_num += file_df['read'][i]
        data.loc[len(data)] = [program_name, const_write_num, var_write_num, read_num]

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
    counter = 0
    for dir in dirs:
        print(counter)
        count_accesses_for_setting(dir[0], setting_reports)
        counter += 1
        # if counter > 50:
            # break
    for report in setting_reports:
        report_str = report.data.to_string()
        f = open("../data/" + report.setting_str + "_report.txt", "w")
        f.write(report_str)
        f.close
    report = pd.DataFrame(columns=["Setting", "Number of Accesses", "Constant Write", "Constant Write (%)", "Variable Write", "Variable Write (%)", "Read Access", "Read Access (%)"])
    total_accesses_for_setting(setting_reports, report)
    report_str = str(counter) + " samples\n" + report.to_string()
    f = open("../data/report.txt", "w")
    f.write(report_str)
    f.close()
    