"""
FileName: 195.py
Author: Fatpandac
Create: 2021/11/23
Description: Given two list of data1 and data2, return True if data1 is a proper subset of data2 else return False.
"""

def main(data1, data2):
    return all(item in data2 for item in data1) and len(data1) < len(data2)
