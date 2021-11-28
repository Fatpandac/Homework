"""
FileName: 213.py
Author: Fatpandac
Create: 2021/11/28
Description: Use recursion to calculate factors of n.
"""

def main(n):
    if n == 1:
        return 1
    else:
        return n * main(n-1)
