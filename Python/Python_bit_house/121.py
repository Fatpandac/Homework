"""
FileName: 121.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a string s, return a list, the elements is word and lenght 
             of 4.
"""

import re

def main(s):
    return re.findall(r'\b\w{4}\b', s)
