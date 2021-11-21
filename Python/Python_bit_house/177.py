"""
FileName: 177.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a number with decimal, return a number of count six in the
             number with octal.
"""

def main(num):
    return str(oct(num)).count('6')
