"""
FileName: 141.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return the number of numbers in the string.
"""

import re

def main(s):
    return len(re.findall(r'\d', s))
