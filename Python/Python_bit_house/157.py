"""
FileName: 157.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a list contains some words of 8 length and 
             have 't' end of them.
"""

import re

def main(s):
    return re.findall(r'\b\w{7}t', s)
