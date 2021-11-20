"""
FileName: 155.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a list with words have character of t in 
             center of word.
"""

import re

def main(s):
    return re.findall(r'\b\w+?t\w+?\b', s)
