"""
FileName: 091.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string, change a,e,i,o,u to upper case and return the new 
             string.
"""

def main(s):
    return s.translate(str.maketrans('aeiou', 'AEIOU'))
