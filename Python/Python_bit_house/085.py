"""
FileName: 085.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list, sorted it and return the center element.
"""

def main(data):
    data_local = data[:]
    data_local.sort()
    return data_local[len(data_local)//2]
