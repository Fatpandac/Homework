"""
FileName: 054.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list, return a list of tuples, the tuple have three
             numbers and them sum is equal ten.
"""

from itertools import combinations

def main(lst):
    combination_lst = list(combinations(lst, 3))
    return [i for i in combination_lst if sum(i) == 10]
