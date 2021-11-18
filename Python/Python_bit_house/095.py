"""
FileName: 095.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a chinese word, return the sorted word.
"""

from pypinyin import pinyin

def main(s):
    return ''.join(sorted(s, key=lambda x: pinyin(x)[0][0]))
