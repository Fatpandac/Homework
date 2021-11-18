"""
FileName: 071.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list of numbers, return True if the element all is 
             integers or float , and False if not.
"""

def main(lst):
    return all(isinstance(i, (int, float)) for i in lst)
