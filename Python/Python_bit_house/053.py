"""
FileName: 053.py
Author: Fatpandac
Create: 2021/11/17
Description: Add '_new' to the end of the file name.
"""

from os.path import splitext

def main(s):
    s = splitext(s)
    return s[0] + '_new' + s[1]
