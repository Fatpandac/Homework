"""
FileName: 208.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a string named s and a interge named tabsize, return a 
             string like result of s.expandtabs(tabsize).
Requirements:
    - Don't use str.expandtabs().
"""

def main(s, tabsize=8):
    return s.replace('\t', ' ' * tabsize)
