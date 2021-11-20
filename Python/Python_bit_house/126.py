"""
FileName: 126.py
Author: Fatpandac
Create: 2021/11/20
Description: Given two iterables withe equal or different length, return a list
             of tuples with absolute positions of elements.
"""

import itertools

def main(iterable1, iterable2):
    return list(itertools.zip_longest(iterable1, iterable2, fillvalue=0))
