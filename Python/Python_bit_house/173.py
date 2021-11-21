"""
FileName: 173.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a object, return True if it's a iterable object, otherwise 
             return False.
"""

def main(obj):
    try:
        iter(obj)
        next(obj)
        return True
    except TypeError:
        return False
