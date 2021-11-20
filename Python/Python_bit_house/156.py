"""
FileName: 156.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a list contains numbers of just 2 length.
"""

import re

def main(s):
    return list(filter(lambda x: len(x) == 2, re.findall(r'\d+', s)))
