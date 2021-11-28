"""
FileName: 209.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a string named s, return a string like result of s.lower().
Requirements:
    - Don't use str.lower().
    - Don't use for loop and while loop.
"""

def main(s):
    return ''.join(map(lambda x: chr(ord(x)+32) if x.isupper() else x, s))
