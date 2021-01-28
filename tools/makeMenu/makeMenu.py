import os

menu = """- ***Homework***"""
path = '.'+ os.sep
Dir = os.listdir(path)

for subFolder in Dir:
    if os.path.isdir(subFolder) and subFolder != '.git':
        menu = menu + "\n    - [**" + subFolder + "**](" + path +  os.sep + subFolder + ")"
        folderList = os.listdir(path + os.sep + subFolder)
        for folder in folderList:
            menu = menu + "\n        - [" + folder + "](" + path + os.sep + subFolder + os.sep + folder + ")"
            if os.path.isdir(path + os.sep + subFolder + os.sep + folder):
                fileList = os.listdir(path + os.sep + subFolder + os.sep + folder)
                for file in fileList:
                    if file != 'README.md':
                        menu = menu + "\n            - [" + file + "](" + path + os.sep + subFolder + os.sep + folder + os.sep + file + ")　｜　" \
                            + "[README.md](" + path + os.sep + subFolder + os.sep + folder + os.sep + "README.md)"
print(menu)