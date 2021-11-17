"""
FileName: 050.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a number, return a number that is the lagest and less or
             equal to the given number in fabonacci sequence.
"""

def fabonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fabonacci(n-1) + fabonacci(n-2)

def main(n):
    for i in range(n):
        if fabonacci(i) > n:
            return fabonacci(i - 1)
