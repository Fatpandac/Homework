"""
FileName: 022.py
Author: Fatpandac
Create: 2021/11/16
Description: Calculate the combinations number by the given numbers.
"""

from math import factorial

def main(n, i):
    return factorial(n) // (factorial(i) * factorial(n - i))
