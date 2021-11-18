"""
FileName: 074.py
Author: Fatpandac
Create: 2021/11/18
Description: Given two string,Return a spliced string, removing the same 
             characters at the end of s1 and the head of s2 during splicing.
"""

def main(s1, s2):
    for i in range(1, len(min(s1, s2))+1):
        if s1[-i:] == s2[:i]:
            return s1[:-i] + s2
    return s1 + s2
