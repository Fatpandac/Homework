"""
FileName: 122.py
Author: Fatpandac
Create: 2021/11/20
Description: Given some list or tuple or string, return a list by the second 
             element of the list.
"""

from operator import itemgetter

def main(*iterables):
    return list(map(itemgetter(1), iterables))
