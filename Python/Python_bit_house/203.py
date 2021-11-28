"""
FileName: 203.py
Author: Fatpandac
Create: 2021/11/28
Description: Geiven a list named data and some list of lists named iterables,
             return a list different from data in which the elements of 
             iterables.
Requirements:
    - Don't use for loop.
"""

def main(data, *iterables):
    return sorted(set(data).difference(*map(set,iterables)), key=data.index)
