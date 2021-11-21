"""
FileName: 170.py
Author: Fatpandac
Create: 2021/11/21
Description: Calculate the Manhattan distance between two points.
"""

def main(x, y):
    return sum(abs(i-j) for i, j in zip(x, y))
