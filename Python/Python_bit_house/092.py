"""
FileName: 092.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string, return number of spcaes head of string.
"""

def main(s):
    return len(s) - len(s.lstrip(' '))
