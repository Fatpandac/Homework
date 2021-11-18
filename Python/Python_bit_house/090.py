"""
FileName: 090.py
Author: Fatpandac
Create: 2021/11/18
Description: Counting game.
"""

from itertools import cycle

def main(lst, k):
    while len(lst) > 1:
        c = cycle(lst)
        for i in range(k):
            t = next(c)
        index = lst.index(t)
        lst = lst[index + 1:] + lst[:index]
    return lst[0]
