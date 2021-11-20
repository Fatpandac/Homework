"""
FileName: 140.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a string have number of words, return the number in the 
             string.
"""

import re

def main(text):
    return re.findall(r'[0-9.]+', text)
