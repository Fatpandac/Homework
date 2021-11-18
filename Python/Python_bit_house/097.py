"""
FileName: 097.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string, return a tuple about numbers of lowercase, 
             uppercase.
"""

def main(s):
    return (sum([1 for c in s if c.isupper()]), \
            sum([1 for c in s if c.islower()]))
