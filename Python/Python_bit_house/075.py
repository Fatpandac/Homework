"""
FileName: 075.py
Author: Fatpandac
Create: 2021/11/18
Description: Given some integer, return common divisors of them, if lenght of 
             arguments is 0, return '必须提供至少一个整数', if arguments is not
             integer, return '必须是整数'
"""

from math import gcd
from functools import reduce

def main(*intergers):
    if not all(isinstance(i, int) for i in integers):
        return '必须都是整数'
    elif len(integers) == 0:
        return '必须提供至少一个整数'
    else:
        return reduce(gcd, integers)
