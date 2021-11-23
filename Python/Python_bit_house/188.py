"""
FileName: 188.py
Author: Fatpandac
Create: 2021/11/23
Description: Translate decimal number to binary format like 'rwx'.
"""

import stat

def main(mode):
    mode = bin(mode).replace('0b', '')
    mode_str = 'r' if int(mode[0]) else '-' + \
               'w' if int(mode[1]) else '-' + \
               'x' if int(mode[2]) else '-' + \
               'r' if int(mode[3]) else '-' + \
               'w' if int(mode[4]) else '-' + \
               'x' if int(mode[5]) else '-' + \
               'r' if int(mode[6]) else '-' + \
               'w' if int(mode[7]) else '-'
    return mode_str

