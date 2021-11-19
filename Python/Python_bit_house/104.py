"""
FileName: 104.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a list of string, return a list of string with like AABB.
"""

import re

def main(s):
    return [j for j in [i[0] for i in findall(r'((.)\2(.)\3)', s)] \
            if j.count(j[0]) != 4]
