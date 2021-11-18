"""
FileName: 087.py
Author: Fatpandac
Create: 2021/11/18
Description: Replace the underline to code make it get the same result of x = 3.

x = 3

def main(num):
    _____________
    x = num
    return globals()['x']
"""

x = 3

def main(num):
    global x
    x = num
    return globals()['x']
