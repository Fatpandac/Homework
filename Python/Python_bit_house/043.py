"""
FileName: 043.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list of some numbers, return synthesize the largest number
             by them.
"""

from itertools import permutations

def main(lst):
    return ''.join(sorted([str(i) for i in lst],
                          key=lambda x: int(x[0]),
                          reverse=True))
