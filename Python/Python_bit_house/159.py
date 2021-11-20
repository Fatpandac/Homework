"""
FileName: 159.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a list, the elements is words with 'e' in 
             them.
"""

import re

def main(s):
    return re.findall(r'\b\w*e\w*\b', s)
