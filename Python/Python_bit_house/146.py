"""
FileName: 146.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a list of same words in the string.
"""

import re

def main(s):
    return re.findall(r'(\w+) +\1', s)
