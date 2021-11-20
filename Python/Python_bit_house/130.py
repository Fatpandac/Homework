"""
FileName: 130.py
Author: Fatpandac
Create: 2021/11/20
Description: Given two list of numbers called data and weights, return the
             weighted average of the two lists.
"""

from operator import mul

def main(values, weights):
    return sum(map(mul, values, weights)) / sum(weights)


