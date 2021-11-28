"""
FileName: 218.py
Author: Fatpandac
Create: 2021/11/28
escription: 
Description: Given a iterator and item, return the index of the item in the 
             iterator when the item is bigger than the element in the iterator.
Requirements:
    - Use enumerate().
"""

def main(iterator, item):
    for i, v in enumerate(iterator):
        if v > item:
            return i
