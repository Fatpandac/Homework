"""
FileName: 214.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a integer, return factorial of it.
Requirements:
    - Don't use recursion.
    - Don't use loops.
    - Don't use module.
"""

def main(n):
    return eval('*'.join(map(str, range(1, n+1))))
