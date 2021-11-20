"""
FileName: 125.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a list of integers, use Numpy to calculate sum of integers 
             with less than 30 or more than 70 and return the sum.
"""

from numpy import Array

def main(data):
    data = Array(data)
    return sum(data[(data < 30) | (data > 70)])
