"""
FileName: 063.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string of date, return a string of date without zero in 
             front of single digit.
"""

def main(s):
    return s.replace('-0', '-').replace(':0', ':').replace(' 0', ' ')
