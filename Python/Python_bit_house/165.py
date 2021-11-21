"""
FileName: 165.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string with three integer values of two sides and a angle 
             and split by space, return the other side of the triangle.
"""

from math import cos, radians

def main(s):
    s = s.split()
    if len(s) != 3 or not all(i.isdigit() for i in s) or not (0 <= int(s[2]) < 180):
        return '数据不合法。'
    else:
        s = list(map(float, s))
        return round((s[0]**2+s[1]**2-2*s[0]*s[1]*cos(radians(s[2])))**0.5, 1)
