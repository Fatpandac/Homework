"""
FileName: 162.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string in chinese, return a new string with flipped words 
             of four lenght.
"""

import jieba

jieba.setLogLevel(20)

def main(s):
    seg_list = [i[::-1] if len(i) == 4 else i for i in jieba.cut(s)]
    return ''.join(seg_list)
