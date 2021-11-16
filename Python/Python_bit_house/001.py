"""
FileName: 001.py
Author: Fatpandac
Create: 2021/11/16
Description: Factorial.
"""

def main(n):
    sum = 1
    for i in range(1, n+1):
        sum *= i
    return sum
