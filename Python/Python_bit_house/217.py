"""
FileName: 217.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a iterator and item, return the index of the item in the 
             iterator when the item is bigger than the element in the iterator.
Requirements:
    - Don't use enumerate().
"""

from itertools import count

def main(iterator, item):
    for i in count(0):
        if next(iterator) > item:
            return i
