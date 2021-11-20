"""
FileName: 147.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, delete spaces around the string and save one space
             between words and delete the repeated words, then return.
"""

import re

def main(s):
    return re.sub(r'(\w+\s*)\1+', r'\1', re.sub(r' +', ' ', s.strip()))
