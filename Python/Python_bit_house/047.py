"""
FileName: 047.py
Author: Fatpandac
Create: 2021/11/17
Description: Given two sides and a angle, find the third side. If two sides is 
             less than 0 or angle out of range 0 to 180, return '数据不对'.
"""

from math import cos, radians

def main(a, b, theta):
    return round((a**2 + b**2 - 2*a*b*cos(radians(theta)))**0.5, 1) if \
           isinstance(a, (int, float)) and isinstance(b, (int, float)) and \
           isinstance(theta, (int, float)) and a > 0 and b > 0 and \
           0 < theta < 180 else '数据不对'
