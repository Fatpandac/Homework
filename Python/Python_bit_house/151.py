"""
FileName: 151.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string in English, return a new string with the first word
             of 'is' changed to 'IS'.
"""

import re

def main(s):
    return re.sub(r'\bis\b', 'IS', s, 1)
