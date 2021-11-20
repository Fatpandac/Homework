"""
FileName: 158.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a list contains words of 8 length and have 
             'a' start of the them.
"""

import re

def main(s):
    return re.findall(r'\ba\w{7}\b', s)
