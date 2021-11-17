"""
FileName: 046.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list, return the number with the most occurrences, if the 
             number of occurrences is the same, return the largest number.
"""

from collections import Counter

def main(lst):
    return max(sorted(lst, reverse=True), key=lst.count)
