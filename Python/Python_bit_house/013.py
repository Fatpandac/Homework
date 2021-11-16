"""
FileName: 013.py
Author: Fatpandac
Create: 2021/11/16
Description: Return a list without zero.
"""

def main(lst):
    return list(filter(lambda i: i != 0, lst))
