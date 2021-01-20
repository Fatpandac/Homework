import os

path = "./"
Dir = os.listdir(path)[2:-2]

for subFolder in Dir:
    folderList = os.listdir(path + os.sep + subFolder)
    for folder in folderList:
        if (folder == 'README.md'):
            continue
        fileList = os.listdir(path + os.sep + subFolder + os.sep + folder)
        for file in fileList:
            if (file == 'Fatpanda.c'):
                oldName = path + os.sep + subFolder + os.sep + folder + os.sep + file
                newName = path + os.sep + subFolder + os.sep + folder + os.sep + 'Fatpandac.c'
                os.rename(oldName,newName)
                print(oldName,'======>',newName)
            if (file == 'Fatpanda.exe'):
                oldName = path + os.sep + subFolder + os.sep + folder + os.sep + file
                newName = path + os.sep + subFolder + os.sep + folder + os.sep + 'Fatpandac.exe'
                os.rename(oldName,newName)
                print(oldName,'======>',newName)