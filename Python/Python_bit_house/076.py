"""
FileName: 076.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a number, return count how many zero in the tail of it 
             binary.
"""

def mian(n):
    return str(bin(n)).split('1')[-1].count('0')
