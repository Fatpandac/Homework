"""
FileName: 004.py
Author: Fatpandac
Create: 2021/11/16
Description: Return a list of all more than or equal the average of the list.
"""

def main(lst):
    return [x for x in lst if x >= sum(lst) / len(lst)]
