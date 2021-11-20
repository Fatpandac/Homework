"""
FileName: 128.py
Author: Fatpandac
Create: 2021/11/20
Description: Given two iterables, if absolute error is less than or equal 1 of
             the absolute position elements, return True else False.
"""

from math import isclose
from functools import partial

isclose = partial(isclose, abs_tol=1)

def main(iterable1, iterable2):
    return all(isclose(a, b) for a, b in zip(iterable1, iterable2))
