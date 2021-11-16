"""
FileName: 007.py
Author: Fatpandac
Create: 2021/11/16
Description: Return a list with only the unique elements from the input list 
             and the order of the elements should be preserved.
"""

def main(lst):
    return sorted(set(lst), key=lst.index)
