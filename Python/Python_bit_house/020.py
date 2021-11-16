"""
FileName: 020.py
Author: Fatpandac
Create: 2021/11/16
Description: Return a list of the first three characters that appear most in 
             the given string.
"""

from collections import Counter

def main(s):
    return [i[0] for i in Counter(s).most_common(3)]
