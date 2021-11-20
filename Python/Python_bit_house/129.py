"""
FileName: 129.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a list of numbers, if it's ascending, return True, else 
             return False.
"""

from operator import lt

def main(data):
    return all(map(lt, data, data[1:]))
