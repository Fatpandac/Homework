"""
FileName: 210.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a string, return a string like result of s.upper().
Requirements:
    - Don't use str.upper().
    - Don't use for loop and while loop.
"""

def main(s):
    return ''.join(map(lambda x: chr(ord(x)-32) if x.islower() else x, s))
