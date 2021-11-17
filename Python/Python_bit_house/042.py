"""
FileName: 042.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a radius, calculate the area of a circle and return, if the
             radius is not integer or real number, return '参数必须是大于0的整
             数或实数'.
"""

from math import pi as PI

def main(r):
    return round(PI * r ** 2, 2) if isinstance(r, (int, float)) and r > 0 \
                                 else '参数必须是大于0的整数或实数'
