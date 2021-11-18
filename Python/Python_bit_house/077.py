"""
FileName: 077.py
Author: Fatpandac
Create: 2021/11/18
Description: Monkey eat peach.
"""

def main(n):
    total = 1
    for i in range(1, n+1):
        total = (total + 1) * 2
    return total
