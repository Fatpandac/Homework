"""
FileName: 212.py
Author: Fatpandac
Create: 2021/11/28
Description: Given a integer, return a number of most times in the number of 
             the octal. 
"""

def main(num):
    return max(oct(num)[2:] ,key=oct(num)[2:].count)
