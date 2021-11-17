"""
FileName: 021.py
Author: Fatpandac
Create: 2021/11/16
Description: Input a number then return a prime number smaller than the number.
"""

def isPrime(num):
    for i in range(2, num):
        if num % i == 0:
            return False
    return True

def main(n):
    for i in range(n, 1, -1):
        if isPrime(i):
            return i
