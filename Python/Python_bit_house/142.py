"""
FileName: 142.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a new string replace continuous numeric 
             substrings with 8.
"""

import re

def main(s):
    return re.sub(r'\d+', '8', s)
