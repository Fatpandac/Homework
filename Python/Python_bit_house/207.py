"""
FileName: 207.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a string named s, a integer named width and a string named
             fillchar, return a string like result of s.rjust(width, fillchar).
Requirements:
    - Don't use str.rjust().
"""

def main(s, width, fillchar=' '):
    return fillchar * (width - len(s)) + s
