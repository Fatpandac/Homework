"""
FileName: 201.py
Author: Fatpandac
Create: 2021/11/25
Description: Given a number of integer named n, return n digit number of 
             narcissistic number.
Requirements:
    - Don't use for loop.
    - Don't use while loop.
"""

def main(n):
    return tuple(filter(lambda x: sum(map(lambda y: int(y)**n, str(x))) == x,
                 range(10**(n-1), 10**n)))
