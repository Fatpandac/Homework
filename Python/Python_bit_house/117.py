"""
FileName: 117.py
Author: Fatpandac
Create: 2021/11/19
Description: Given two vectors, return the angle between them.
"""

from math import sqrt,acos,degrees

def main(vector1, vector2):
    x1, y1 = vector1
    x2, y2 = vector2
    cos = lambda x1, y1, x2, y2: \
            (x1*x2 + y1*y2)/(sqrt(x1**2 + y1**2)*sqrt(x2**2 + y2**2))
    return '{:.2f}'.format(degrees(acos(cos(x1, y1, x2, y2))))
