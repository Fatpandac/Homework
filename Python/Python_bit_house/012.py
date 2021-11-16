"""
FileName: 012.py
Author: Fatpandac
Create: 2021/11/16
Description: Retrun the longest string in a list.
"""

def main(lst):
    return max(lst, key=len)
