"""
FileName: 026.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list of angles then return a list of sine value of each angle.
"""

from math import sin, radians

def main(lst):
    return [sin(radians(x)) for x in lst]
