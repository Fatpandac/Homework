"""
FileName: 150.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string in English, return a list of words after 'than'.
"""

import re

def main(s):
    return re.findall(r'\bthan\s\w+', s)
