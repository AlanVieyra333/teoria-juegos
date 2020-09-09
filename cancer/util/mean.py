import os
import numpy as np
import matplotlib.pyplot as plt

np.set_printoptions(precision=4)


def read_data_from_file(filename):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, 12))
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


def read_data_from_folder(folder):
    files = []
    data = []

    for r, d, f in os.walk(folder):
        for file in f:
            if '.csv' in file and 'primary_tumor_graphs' in file:
                files.append(os.path.join(r, file))

    for filename in files:
        data.append(read_data_from_file(filename))
    # print(data)
    print(str(len(files)) + '\tfiles in ' + folder)

    return data


def mean_data(data_files):
    # tumor-cells, tan1-cells, tan2-cells, tam1-cells, tam2-cells, natural-killers
    data = np.zeros((6, 12))
    files = len(data_files)

    for data_file in data_files:
        for i in range(6):
            for j in range(12):
                data[i, j] += data_file[i, j]

    if files != 0:
        data /= files

        return data
    else:
        return []


def export_data(data, filename):
    if os.path.exists(filename):
        os.remove(filename)

    if len(data) > 0:
        f = open(filename, "w")

        f.write(
            'tumor-cells,tan1-cells,tan2-cells,tam1-cells,tam2-cells,natural-killers\n')

        for j in range(12):
            for i in range(6):
                f.write('%.4f' % data[i, j])
                if i != 5:
                    f.write(",")
            f.write("\n")

        f.close()

# folders = ['debil-debil/']
folders = ['debil-debil/', 'debil-medio/', 'debil-fuerte/',
           'medio-debil/', 'medio-medio/', 'medio-fuerte/',
           'fuerte-debil/', 'fuerte-medio/', 'fuerte-fuerte/']
# folders = ['../../ultimo_programa_cancer_3/']

for folder in folders:
    # print('>> Data primary_tumor' + folder)
    dataPrimary = mean_data(read_data_from_folder(folder + 'primary_tumor'))
    export_data(dataPrimary, folder + "mean_primary_tumor.csv")
    # print(dataPrimary)
    plt.plot(np.transpose(dataPrimary))
    plt.ylabel('CM_IS - Primary tumor')
    plt.savefig(folder + 'grafica_primary_tumor', dpi=None, facecolor='w', edgecolor='w',
        orientation='portrait', format=None,
        transparent=False, bbox_inches=None, pad_inches=0.1,
        metadata=None)
    plt.close()

    # print('>> Data bone' + folder)
    dataBone = mean_data(read_data_from_folder(folder + 'bone'))
    export_data(dataBone, folder + "mean_bone.csv")
    # print(dataBone)
    plt.plot(np.transpose(dataBone))
    plt.ylabel('CM_IS - Bone')
    plt.savefig(folder + 'grafica_bone', dpi=None, facecolor='w', edgecolor='w',
        orientation='portrait', format=None,
        transparent=False, bbox_inches=None, pad_inches=0.1,
        metadata=None)
    plt.close()

