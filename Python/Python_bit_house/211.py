"""
FileName: 211.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a integer, return a tuple of count number one and zero in 
             binary representation of the integer.
"""

def main(num):
    return (bin(num).count('0')-1, bin(num).count('1'))
