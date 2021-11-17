"""
FileName: 038.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a number, if it's narcissistic number, return true, else 
             return false.
"""

def main(n):
    return (n == sum(map(lambda x: int(x)**len(str(n)), str(n))))
