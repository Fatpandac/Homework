"""
FileName: 194.py
Author: Fatpandac
Create: 2021/11/23
Description: Given a some integers, return the product of them.
Requirements:
    - Use the reduce function.
    - Use the mul function.
"""

from functools import reduce
from operator import mul

def main(*numbers):
    return reduce(mul, numbers)
