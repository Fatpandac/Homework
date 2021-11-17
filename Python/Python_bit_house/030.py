"""
FileName: 030.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a tuple of many numbers, return the arithmetic average of 
             these numbers and keep one decimal place. 
"""

def main(tup):
    return round(sum(sorted(tup)[1:-1]) / (len(tup)-2), 1)
