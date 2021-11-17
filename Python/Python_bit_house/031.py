"""
FileName: 031.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a integer number, return sum of n items of fibonacci 
             sequence.
"""

def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

def main(n):
    return sum([fibonacci(i) for i in range(n+1)])
