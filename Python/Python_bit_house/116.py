"""
FileName: 116.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a tuple of numbers, return a tuple without the index of 
             multiple of 4.
"""

def main(data):
    data = (0,) + data
    return tuple(data[i] for i in range(len(data)) if i % 4 != 0)
