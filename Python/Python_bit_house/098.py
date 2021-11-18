"""
FileName: 098.py
Author: Fatpandac
Create: 2021/11/18
Description: Calculating the value of an arbitrary polynomial.
"""

from functools import reduce

def main(factors, x):
    return reduce(lambda x, y: x + y, \
           [factors[i]*(x**(len(factors)-i-1)) for i in range(len(factors))])
