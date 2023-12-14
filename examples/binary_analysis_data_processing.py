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
        file_df = pd.read_csv(dir_path + "/" + file, sep=", ", engine="python")
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

# get a complete list of all relevant variables
def get_complete_var_list(file_df_dict):
    var_list = []
    for setting_str, df in file_df_dict.items():
        for name in df["name"]:
            if not name in var_list:
                var_list.append(name)
    return var_list

# generate entry for each variable that has info for each setting
def get_var_info(var, file_df_dict, columns):
    entry = {}
    for column in columns:
        if column == "var_name":
            entry[column] = var
        else:
            file_df = file_df_dict[column]
            row = file_df.loc[file_df["name"] == var]
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
def data_transform_variables(dir_path):
    files = os.listdir(dir_path)
    file_df_dict = get_file_df_dict(dir_path, files)
    if not check_files(dir_path, files):
        raise Exception("Warning: Files in " + dir_path + " are not complete (CFG was not generated)")
    var_list = get_complete_var_list(file_df_dict)
    df = pd.DataFrame(columns=["var_name"] + settings_str())
    for var in var_list:
         entry = get_var_info(var, file_df_dict, df.columns)
         df.loc[len(df)] = entry
    # print(df)
    return df

def init_filter(dir):
    try:
        data = data_transform_variables(dir)
    except:
        print("Something went wrong for directory (check exceptions): " + dir)
        return
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

class ConstantGlobalVariables(ReductionCallback):
    def __init__(self, sanitizer, settings):
        self.sanitizer = sanitizer
        self.settings = settings
        self.dir = "../data/temp_reduce"

    def test(self, program: SourceProgram) -> bool:
        if not self.sanitizer.sanitize(program):
            return False
        program.save_to_file(self.dir + "/program")
        for setting in self.settings:
            setting_str = setting_str_f(setting)
            _, project, globals = compile_globals_project(program, setting)
            binary_analysis(project, globals, dir_name, setting_str)
        return init_filter(self.dir)

def get_program(dir):
    files = os.listdir(dir)
    for file in files:
        if file.endswith(".c"):
            path = dir + "/" + file
            f = open(path, "r")
            program = SourceProgram(
                code=f.read(),
                language=Language.C,
                defined_macros=(),
                include_paths=(),
                system_include_paths=(),
                flags=(),)
            f.close()
    return program

if __name__ == "__main__":
    setting_reports = setup_setting_reports()
    dirs = os.walk("../data")
    # search for interesting cases and reduce the program with creduce
    limit = 10000
    counter = 0
    interesting_counter = 0
    """
    for dir in dirs:
        interesting = init_filter(dir[0])
        counter += 1
        if counter > limit:
            break
        if interesting:
            interesting_counter += 1
            program = get_program(dir[0])
            sanitizer = Sanitizer()
            rprogram = Reducer().reduce(program, ConstantGlobalVariables(sanitizer, [clang_3, gcc_3]))
            print(dir[0])
            print(interesting)
            print(interesting_counter)
      """  
    
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
    
    
    
    