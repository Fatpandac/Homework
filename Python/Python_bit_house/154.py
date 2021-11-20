"""
FileName: 154.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a tuple, return a new tuple with changed odd position 
             elements to 0.
"""

def main(tup):
    return tuple(0 if i % 2 else i for i in tup)
