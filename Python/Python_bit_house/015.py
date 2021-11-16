"""
FileName: 015.py
Author: Fatpandac
Create: 2021/11/16
Description: Retrun a list without even numbers.
"""

def main(lst):
    return list(filter(lambda i: i%2 != 0, lst))
