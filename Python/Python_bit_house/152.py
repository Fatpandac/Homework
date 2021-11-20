"""
FileName: 152.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a list of strings, return a list of the strings with the 
             same length of the longest string in the list.
"""

def main(lst):
    return [i.rjust(max([len(i) for i in lst]), '0') for i in lst]
