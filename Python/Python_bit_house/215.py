"""
FileName: 215.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a func and a iterable, then call a func named helper with
             the iterable and the func as the argument to use the func in the 
             iterable.
Requirements:
    - Use for loop.
    - Use yield.
"""

def helper(func, iterable):
    for i in iterable:
        res = func(i)
        yield res
        
def main(func, iterable):
    return tuple(helper(func, iterable))
