"""
FileName: 052.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list of numbers, return the index of the largest number.
"""

def main(lst):
    return [i for i in range(len(lst)) if lst[i] == max(lst)]
