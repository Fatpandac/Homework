"""
FileName: 073.py
Author: Fatpandac
Create: 2021/11/18
Description: Given two string, return count the same charaters in corresponding
             position of them.
"""

def main(s1, s2):
    return sum(1 for i in range(min(s1, s2)) if s1[i] == s2[i])
