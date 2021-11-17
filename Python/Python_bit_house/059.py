"""
FileName: 059.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list, return the greatest common divisor of all the 
             elements.
"""

from math import gcd
from functools import reduce

def main(lst):
    return reduce(gcd, lst)
