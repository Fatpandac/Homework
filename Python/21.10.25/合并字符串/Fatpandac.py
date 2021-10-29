"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/25
Description: Orderly merging two strings.
"""

from functools import reduce

def str_bin(str1, str2):
    return reduce(lambda x, y: x + y, sorted(str1 + str2))

print(str_bin(input(),input()))
