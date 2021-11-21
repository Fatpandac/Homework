"""
FileName: 168.py
Author: Fatpandac
Create: 2021/11/21
Description: Given two strings called text and characters, return the sum of 
             times characters appears in text.
"""

def main(text, charaters):
    return sum(text.count(c) for c in set(characters))
