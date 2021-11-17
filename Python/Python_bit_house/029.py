"""
FileName: 029.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a function and a list, return the maximum value of list with
             the function applied to each element.
"""

def main(func, lst):
    return max([func(i) for i in lst])
