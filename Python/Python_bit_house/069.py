"""
FileName: 069.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list of numbers, return a new list sorted by sum of each 
             element's digits.
"""

def main(lst):
    return sorted(lst, key=lambda x: sum(int(i) for i in str(x)))
