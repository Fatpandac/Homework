"""
FileName: 166.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a iterable container, return a tuple with tuples of index 
             and value of each element.
"""

def main(iterable):
    return tuple(enumerate(iterable, start=1))
