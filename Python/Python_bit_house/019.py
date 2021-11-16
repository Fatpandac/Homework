"""
FileName: 019.py
Author: Fatpandac
Create: 2021/11/16
Description: Given a string, filter out all non-alphabetic characters, and 
             return True if the resulting string is a palindrome.
"""

import re

def main(s):
    return re.sub(r'[^a-zA-Z]', '', s) == re.sub(r'[^a-zA-Z]', '', s)[::-1]
