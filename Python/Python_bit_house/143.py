"""
FileName: 143.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return True if it's composed of numbers and length
             is equal 11, otherwise return False.
"""

import re

def main(s):
    return re.match(r'^\d{11}$', s) is not None
