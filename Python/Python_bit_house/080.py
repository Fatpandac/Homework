"""
FileName: 80.py
Author: Fatpandac
Create: 2021/11/18
Description: Given two list of the same length, return sum of the absolute 
             value of the difference between the integers at the corresponding 
             position.
"""

from operator import sub

def main(a, b):
    return sum(map(abs, map(sub, a, b)))
