
import pandas as pd
import ast
from statistics import mean
from statistics import median
import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np

   

def cfg_comparison():
    num_bins = 50
    num_outliers = 100
    num_values = 100
    df = pd.read_csv('./cfg_data.csv')
    opt_levels = ["0", "1", "2", "3"]
    # for nodes
    difference_distr = pd.DataFrame()
    ratio_distr = pd.DataFrame()
    file_str = ""
    for opt_level in opt_levels:
        gcc = ""
        llvm = ""
        for column in df.columns:
            if "GCC" in column and opt_level in column:
                gcc = column
            if "LLVM" in column and opt_level in column:
                llvm = column
        comparison_data = df.loc[:,[gcc, llvm]]
        differences = []
        ratios = []
        columns = comparison_data.columns
        for i in comparison_data.index:
            gcc_val = ast.literal_eval(comparison_data.loc[i,columns[0]])["nodes"]
            llvm_val = ast.literal_eval(comparison_data.loc[i, columns[1]])["nodes"]
            differences.append(gcc_val - llvm_val)
            ratios.append(gcc_val / llvm_val)
        difference_high_values = []
        difference_low_values = []
        ratio_high_values = []
        ratio_low_values = []
        for i in range(num_outliers):
            difference_high_value = max(differences)
            difference_low_value = min(differences)
            differences.remove(difference_high_value)
            differences.remove(difference_low_value)
            ratio_high_value = max(ratios)
            ratio_low_value = min(ratios)
            ratios.remove(ratio_high_value)
            ratios.remove(ratio_low_value)
            if len(difference_high_values) < num_values:
                difference_high_values.append(difference_high_value)
                difference_low_values.append(difference_low_value)
                ratio_high_values.append(ratio_high_value)
                ratio_low_values.append(ratio_low_value)
        difference_high_interval_str = "difference high value interval: " + str((max(difference_high_values), min(difference_high_values))) + "\n"
        difference_low_interval_str = "difference low value interval: " + str((max(difference_low_values), min(difference_low_values))) + "\n"
        ratio_high_interval_str = "ratio high value interval: " + str((max(ratio_high_values), min(ratio_high_values))) + "\n"
        ratio_low_interval_str = "ratio low value interval: " + str((max(ratio_low_values), min(ratio_low_values))) + "\n"
        file_str = file_str + "-O" + opt_level + "\n" + difference_high_interval_str + difference_low_interval_str + ratio_high_interval_str + ratio_low_interval_str
        difference_mean = mean(differences)
        ratio_mean = mean(ratios)
        difference_median = median(differences)
        ratio_median = median(ratios)
        difference_distr.insert(0, ("-O" + opt_level + "\nmean: " + str(round(difference_mean, 1)) + "\nmedian: " + str(difference_median)), differences, True)
        ratio_distr.insert(0, ("-O" + opt_level + "\nmean: " + str(round(ratio_mean, 1)) + "\nmedian: " + str(round(ratio_median, 1))), ratios, True)
        sns.displot(differences, kde=True, bins=num_bins, label=("-O" + opt_level + "\nmean: " + str(round(difference_mean, 2)) + "\nmedian: " + str(difference_median)))
        plt.xlabel("Difference")
        plt.ylabel("Count")
        plt.legend()
        plt.savefig("./plots/cfg_nodes_difference_hist_O" + opt_level + ".png", dpi=300, bbox_inches="tight")
        sns.displot(ratios, kde=True, bins=num_bins, label=("-O" + opt_level + "\nmean: " + str(round(ratio_mean, 2)) + "\nmedian: " + str(round(ratio_median, 1))))
        plt.xlabel("Ratio")
        plt.ylabel("Count")
        plt.legend()
        plt.savefig("./plots/cfg_nodes_ratio_hist_O" + opt_level + ".png", dpi=300, bbox_inches="tight")
    f = open("./outlier_intervals_nodes.txt", "w")
    f.write(file_str)
    f.close()

    # for edges
    difference_distr = pd.DataFrame()
    ratio_distr = pd.DataFrame()
    file_str = ""
    for opt_level in opt_levels:
        gcc = ""
        llvm = ""
        for column in df.columns:
            if "GCC" in column and opt_level in column:
                gcc = column
            if "LLVM" in column and opt_level in column:
                llvm = column
        comparison_data = df.loc[:,[gcc, llvm]]
        differences = []
        ratios = []
        columns = comparison_data.columns
        for i in comparison_data.index:
            gcc_val = ast.literal_eval(comparison_data.loc[i,columns[0]])["edges"]
            llvm_val = ast.literal_eval(comparison_data.loc[i, columns[1]])["edges"]
            differences.append(gcc_val - llvm_val)
            ratios.append(gcc_val / llvm_val)
        difference_high_values = []
        difference_low_values = []
        ratio_high_values = []
        ratio_low_values = []
        for i in range(num_outliers):
            difference_high_value = max(differences)
            difference_low_value = min(differences)
            differences.remove(difference_high_value)
            differences.remove(difference_low_value)
            ratio_high_value = max(ratios)
            ratio_low_value = min(ratios)
            ratios.remove(ratio_high_value)
            ratios.remove(ratio_low_value)
            if len(difference_high_values) < num_values:
                difference_high_values.append(difference_high_value)
                difference_low_values.append(difference_low_value)
                ratio_high_values.append(ratio_high_value)
                ratio_low_values.append(ratio_low_value)
        difference_high_interval_str = "difference high value interval: " + str((max(difference_high_values), min(difference_high_values))) + "\n"
        difference_low_interval_str = "difference low value interval: " + str((max(difference_low_values), min(difference_low_values))) + "\n"
        ratio_high_interval_str = "ratio high value interval: " + str((max(ratio_high_values), min(ratio_high_values))) + "\n"
        ratio_low_interval_str = "ratio low value interval: " + str((max(ratio_low_values), min(ratio_low_values))) + "\n"
        file_str = file_str + "-O" + opt_level + "\n" + difference_high_interval_str + difference_low_interval_str + ratio_high_interval_str + ratio_low_interval_str
        difference_mean = mean(differences)
        ratio_mean = mean(ratios)
        difference_median = median(differences)
        ratio_median = median(ratios)
        difference_distr.insert(0, ("-O" + opt_level + "\nmean: " + str(round(difference_mean, 1)) + "\nmedian: " + str(difference_median)), differences, True)
        ratio_distr.insert(0, ("-O" + opt_level + "\nmean: " + str(round(ratio_mean, 1)) + "\nmedian: " + str(round(ratio_median, 1))), ratios, True)
    sns.displot(difference_distr, kde=True, bins=num_bins)
    plt.xlabel("Difference")
    plt.ylabel("Count")
    plt.savefig("./plots/cfg_edges_difference_hist.png", dpi=300, bbox_inches="tight")
    sns.displot(ratio_distr, kde=True, bins=num_bins)
    plt.xlabel("Ratio")
    plt.ylabel("Count")
    plt.savefig("./plots/cfg_edges_ratio_hist.png", dpi=300, bbox_inches="tight")
    f = open("./outlier_intervals_edges.txt", "w")
    f.write(file_str)
    f.close()

def globals_comparison():
    df = pd.read_csv("./globals_data.csv")
    opt_levels = ["0", "1", "2", "3"]
    # for nodes
    difference_distr = pd.DataFrame()
    for opt_level in opt_levels:
        gcc = ""
        llvm = ""
        for column in df.columns:
            if "GCC" in column and opt_level in column:
                gcc = column
            if "LLVM" in column and opt_level in column:
                llvm = column
        comparison_data = df.loc[:,[gcc, llvm]]
        print(comparison_data)       
        differences = []
        ratios = []
        columns = comparison_data.columns
        for i in comparison_data.index:
            gcc_val = comparison_data.loc[i,columns[0]]
            llvm_val = comparison_data.loc[i, columns[1]]
            differences.append(gcc_val - llvm_val)
        difference_mean = mean(differences)
        difference_median = median(differences)
        difference_distr.insert(0, ("-O" + opt_level + "\nmean: " + str(round(difference_mean, 1)) + "\nmedian: " + str(difference_median)), differences, True)
        sns.displot(differences, kde=True, bins=20, label=("-O" + opt_level + "\nmean: " + str(round(difference_mean, 1)) + "\nmedian: " + str(difference_median)))
        plt.xlabel("Difference")
        plt.ylabel("Count")
        plt.legend()
        plt.savefig("./plots/globals_difference_O" + opt_level + ".png", dpi=300, bbox_inches="tight")

def interestingness_eval():
    df = pd.read_csv("./interesting_data.csv")
    n = len(df.index)
    columns = df.columns[1:]
    sums = {}
    percentage = {}
    for column in columns:
        sums[column] = 0
    for i in df.index:
        for column in columns:
            if df.loc[i, column]:
                sums[column] += 1
    for column in columns:
        percentage[column] = sums[column] / n
    file_str = "filter name\tnumber of interesting cases\tpercentage of interesting cases\n"
    for column in columns:
        file_str = file_str + column + "\t" + str(sums[column]) + "\t" + str(percentage[column]) + "\n"
    f = open("./interesting_info.txt", "w")
    f.write(file_str)
    f.close()

        


def main():
    # cfg comparison:
    cfg_comparison()
    # globals comparison:
    globals_comparison()
    # interestingness evaluation:
    interestingness_eval()

if __name__ == "__main__":
    main()