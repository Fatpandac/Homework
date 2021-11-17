"""
FileName: 058.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string, find the longest substring in the string.
"""

from re import findall

def main(s):
    return max(findall(r'(?=(\d+))', s), key=len) if \
           len(findall(r'(?=(\d+))', s)) != 0 else '没有数字'
