"""
FileName: 216.py
Author: Fatpandac
Create: 2021/11/28
Description: Create a iterator function named fib.
"""

def fib():
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b

def main(n):
    for num in fib():
        if num > n:
            return num
