"""
FileName: 145.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a new string with capitalize the first 
             letter of each word.
"""

def main(s):
    return ' '.join(map(lambda x: x.capitalize(), s.split()))
