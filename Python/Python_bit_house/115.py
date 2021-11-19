"""
FileName: 115.py
Author: Fatpandac
Create: 2021/11/19
Description: Given two number called start and end, return the largest number
             with can aliquot by seventeen , else return '不存在'.
"""

def main(start, stop):
    for i in range(stop, start+1, -1):
        if i % 17 == 0:
            return i
    return '不存在'
