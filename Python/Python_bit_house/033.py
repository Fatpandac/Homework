"""
FileName: 033.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a string and less than the leght of the string, return a new
             string by characters loop left n times in string.
"""

def main(s, n):
    return s[n:] + s[:n]
