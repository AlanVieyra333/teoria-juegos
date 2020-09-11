import os
import numpy as np
import matplotlib.pyplot as plt
from cycler import cycler
from scipy import stats

# dirs = ['debil-debil/', 'debil-medio/', 'debil-fuerte/',
#            'medio-debil/', 'medio-medio/', 'medio-fuerte/',
#            'fuerte-debil/', 'fuerte-medio/', 'fuerte-fuerte/']
dirs = ['../ultimo_programa_cancer/log/']
out_dir = 'statistics/fuerte-fuertee/'

tiks = 21

np.set_printoptions(precision=4)
plt.rcParams['axes.prop_cycle'] = cycler(
    'color', ['#1f77b4', '#8c564b', '#ff7f0e', '#196F3D', '#33FF52', '#d62728'])


def read_data_from_file(filename):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, tiks))
    j = 0

    # print('File:', filename)
    f = open(filename, "r")
    lines = f.readlines()

    isNewBlock = False
    startRead = False

    for line in lines:
        if startRead and not '"x"' in line:
            line = line.replace('"', '')
            # print(line)
            values = line.split(",")
            for i in range(6):
                data[i, j] = values[(i*4) + 1]
            j += 1

        if isNewBlock and 'tumor-cells'.lower() in line.lower():
            startRead = True

        if line == '\n':
            isNewBlock = True
        else:
            isNewBlock = False

    f.close()
    return data


def read_data_from_directory(dir):
    data = np.array([])
    files = []

    for r, d, f in os.walk(dir):
        for file in f:
            if '.csv' in file and 'primary_tumor_graphs' in file:
                files.append(os.path.join(r, file))

    for filename in files:
        # data.append()
        if data.size == 0:
            data = np.array([read_data_from_file(filename)])
        else:
            data = np.append(data, [read_data_from_file(filename)], axis=0)
    # print(data)
    print(str(len(files)) + '\tfiles in ' + dir)

    return data


def get_mean_data(data_files):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, tiks))

    if len(data_files) != 0:
        for i in range(6):
            for j in range(tiks):
                data[i, j] = np.mean(data_files[:, i, j])

        return data

    return []


def get_mode_data(data_files):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, tiks))

    if len(data_files) != 0:
        for i in range(6):
            for j in range(tiks):
                data[i, j] = stats.mode(data_files[:, i, j])[0][0]

        return data

    return []

def get_std_data(data_files):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, tiks))

    if len(data_files) != 0:
        for i in range(6):
            for j in range(tiks):
                data[i, j] = np.std(data_files[:, i, j])

        return data

    return []


def get_median_data(data_files):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, tiks))

    if len(data_files) != 0:
        for i in range(6):
            for j in range(tiks):
                data[i, j] = np.median(data_files[:, i, j])

        return data

    return []


def export_data(data, filename):
    if os.path.exists(filename):
        os.remove(filename)

    if len(data) > 0:
        f = open(filename, "w")

        f.write(
            'tumor-cells,tan1-cells,tan2-cells,tam1-cells,tam2-cells,natural-killers\n')

        for j in range(tiks):
            for i in range(6):
                f.write('%.4f' % data[i, j])
                if i != 5:
                    f.write(",")
            f.write("\n")

        f.close()


def export_graph(data, title, filename):
    plt.title('CM_IS - ' + title)
    plt.plot(np.transpose(data))
    plt.legend(['tumor-cells', 'tan1-cells', 'tan2-cells',
                'tam1-cells', 'tam2-cells', 'natural-killers'])
    plt.xlabel('Ticks')
    plt.ylabel('Number cells')
    plt.savefig(filename, dpi=None, facecolor='w', edgecolor='w',
                orientation='portrait', format=None,
                transparent=False, bbox_inches=None, pad_inches=0.1,
                metadata=None)
    plt.close()


def create_dirs():
    if not os.path.exists(out_dir):
        os.makedirs(out_dir)

    if not os.path.exists(out_dir + 'mean'):
        os.makedirs(out_dir + 'mean')

    if not os.path.exists(out_dir + 'mode'):
        os.makedirs(out_dir + 'mode')

    if not os.path.exists(out_dir + 'median'):
        os.makedirs(out_dir + 'median')

    if not os.path.exists(out_dir + 'std'):
        os.makedirs(out_dir + 'std')


create_dirs()

for dir in dirs:
    tumors = ['primary_tumor', 'bone', 'liver', 'lung']

    for tumor in tumors:
        data = read_data_from_directory(dir + tumor)
        # print(data)

        mean_data = get_mean_data(data)
        export_data(mean_data, out_dir + 'mean/mean_' + tumor + '.csv')
        export_graph(mean_data, tumor, out_dir + 'mean/mean_' + tumor)

        mode_data = get_mode_data(data)
        export_data(mode_data, out_dir + 'mode/mode_' + tumor + '.csv')
        export_graph(mode_data, tumor, out_dir + 'mode/mode_' + tumor)

        median_data = get_median_data(data)
        export_data(median_data, out_dir + 'median/median_' + tumor + '.csv')
        export_graph(median_data, tumor, out_dir + 'median/median_' + tumor)

        std_data = get_std_data(data)
        export_data(std_data, out_dir + 'std/std_' + tumor + '.csv')
        export_graph(std_data, tumor, out_dir + 'std/std_' + tumor)
