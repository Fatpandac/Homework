"""
FileName: 206.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a string named s, a integer named width and a string named
             fillchar, return a string like result of s.ljust(width, fillchar).
Requirements:
    - Don't use str.ljust().
"""

def main(s, width, fillchar=' '):
    return s + fillchar * (width - len(s))
