"""
FileName: 205.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a strings of some words splited by space, realize buit-in 
             function of string.capitalize(). return a string of result.
"""

def main(s):
    return ' '.join(map(lambda x: x[0].upper() + x[1:].lower(), s.split(' ')))
