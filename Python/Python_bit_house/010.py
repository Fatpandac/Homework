"""
FileName: 010.py
Author: Fatpandac
Create: 2021/11/16
Description: Factorial of 20, 30, 40.
"""

from functools import reduce
from operator import mul

def main(n):
    return reduce(mul, range(1, n+1))

if __name__ == '__main__':
    print(main(20), main(30), main(40), sep='\n')
