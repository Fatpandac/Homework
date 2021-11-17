"""
FileName: 023.py
Author: Fatpandac
Create: 2021/11/16
Description: Given two integers n and a, n is greater than or equal to 1, a is 
             between 0 and 9, return sum of a + aa + aaa + aaaa + ... + aaaaaa
Requirement:
    - Don't use loop
    - Don't use comperhensions
"""

def main(n, a):
    return sum(map(int, map(lambda i: str(a) * i, range(1, n+1))))
