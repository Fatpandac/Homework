"""
FileName: 082.py
Author: Fatpandac
Create: 2021/11/18
Description: Given two string of s1 and s2, return sum of all the common characters in s1 and s2.
"""

def main(s1, s2):
    return sum(map(s1.count, set(s2)))
