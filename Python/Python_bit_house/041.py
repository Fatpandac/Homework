"""
FileName: 041.py
Author: Fatpandac
Create: 2021/11/17
Description: Given some string, if other string is in the first string, return
             True else return False.
"""

def main(s1, s2, *s3):
    return all([i in s1 for i in ((s2,) + s3)])
