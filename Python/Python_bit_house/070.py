"""
FileName: 070.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list of some numbers, return a tuple with sum the element
             of odd numbers of index and sum the element of even numbers of 
             index.
"""

def main(lst):
    return (sum(lst[1::2]), sum(lst[::2]))
