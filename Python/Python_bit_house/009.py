"""
FileName: 009.py
Author: Fatpandac
Create: 2021/11/16
Description: Return a list with elements in reverse order by length.
"""

def main(lst):
    return sorted(lst, key=len, reverse=True)
