"""
FileName: 111.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a list of integers, return a tuple of the sum of odd elements and even elements.
"""

def main(lst):
    return (sum(lst[::2]), sum(lst[1::2]))
