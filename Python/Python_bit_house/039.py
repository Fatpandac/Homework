"""
FileName: 039.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list of numbers, return sum of each absolute value of the
             element in the list.
"""

def main(lst):
    return sum(map(abs, lst))
