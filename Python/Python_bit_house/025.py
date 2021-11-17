"""
FileName: 025.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list of several collections, return to the collection and 
             set.
"""

def main(lst):
    return lst[0].union(*lst[1:])
