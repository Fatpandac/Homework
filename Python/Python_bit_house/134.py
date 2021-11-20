"""
FileName: 134.py
Author: Fatpandac
Create: 2021/11/20
Description: Rgb2hex.
"""

def main(color):
    if all([0 <= i <= 255 for i in color]):
        return '#' + ''.join(["{:0>2x}".format(i).upper() for i in color])
    else:
        return '无效参数'
