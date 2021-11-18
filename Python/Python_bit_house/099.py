"""
FileName: 099.py
Author: Fatpandac
Create: 2021/11/19
Description: Climb stairs.
"""

def main(n):
    a, b, c = 1, 2, 4
    for i in range(n - 3):
        a, b, c = b, c, a + b + c
    return c
