"""
FileName: 127.py
Author: Fatpandac
Create: 2021/11/20
Description: Given two iterables, return cartesian product.
"""

import itertools

def main(iterable1, iterable2):
    return list(itertools.product(iterable1, iterable2))
