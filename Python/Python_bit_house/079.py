"""
FileName: 079.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list of integers, return a result by all the elements
             multiplied.
"""

from operator import mul
from functools import reduce

def main(lst):
    return reduce(mul, lst)
