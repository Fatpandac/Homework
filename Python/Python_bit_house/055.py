"""
FileName: 055.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a string, return a string with the uqniue characters
             in the order they appear in the original string.
"""

def main(s):
    return "".join([i for i in s if i not in s.replace(i, '', 1)])


