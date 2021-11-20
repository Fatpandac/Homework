"""
FileName: 136.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a list have some sublist, return a new list which have all 
             the sublist's elements.
"""

from operator import chain

def main(data):
    return list(chain.from_iterable(data))
