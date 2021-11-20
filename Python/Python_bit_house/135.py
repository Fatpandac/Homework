"""
FileName: 135.py
Author: Fatpandac
Create: 2021/11/20
Description: Hex2rgb.
"""

from functools import partial

int = partial(int, base=16)

def main(color):
    hex = tuple([int(str(color[i:i+2]), 16) for i in (0, 2, 4)])
    if all([0<= i <= 255 for i in hex]) and len(color) == 7:
        return hex
    else:
        return '无效参数'
