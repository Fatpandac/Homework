"""
FileName: 084.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list of integers, return the largest of absolute numbers 
             of all elements.

"""

def main(data):
    return max(data, key=abs)
