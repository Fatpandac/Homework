"""
FileName: 171.py
Author: Fatpandac
Create: 2021/11/21
Description: Given two iterables called iterable1 and iterable2, return '参数必
             须为可迭代对象' if iterable1 and iterable2 are not iterable. 
             return True if the elements of iterable1 are in iterable2 else 
             False.
"""

from collections.abc import Iterable

def main(iterable1, iterable2):
    if isinstance(iterable1, Iterable) or isinstance(iterable2, Iterable):
        if all(i in iterable2 for i in iterable1):
            return True
        else:
            return False
    else:
        return '参数必须为可迭代对象'
