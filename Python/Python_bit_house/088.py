"""
FileName: 088.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a integer or float number of radius, return the area of a 
             circle, return '半径必须为大于0的整数或实数' if the input is 
             invalid.
"""

from math import pi as PI

def main(r):
    if isinstance(r, (int, float)) and r > 0:
        return PI * r ** 2
    else:
        return '半径必须为大于0的整数或实数'
