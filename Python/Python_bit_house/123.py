"""
FileName: 123.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a string, return a new string with each character's unicode 
             minus 1.
"""

def main(text):
    return ''.join(chr(ord(c) - 1) for c in text)
