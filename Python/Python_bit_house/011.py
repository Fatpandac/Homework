"""
FileName: 011.py
Author: Fatpandac
Create: 2021/11/16
Description: Return the vector product of two vectors.
"""

from operator import mul

def main(vector1, vector2):
    return sum(map(mul, vector1, vector2))

