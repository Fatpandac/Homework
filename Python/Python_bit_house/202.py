"""
FileName: 202.py
Author: Fatpandac
Create: 2021/11/25
Description: Given a string of some name in chinese and english, return the 
             number of string length is three.
Requirements:
    - Don't use for loop.
    - Don't use standard library and extension library.
"""

def main(s):
    return sum(map(lambda x: len(x) == 3, s.split('，')))
