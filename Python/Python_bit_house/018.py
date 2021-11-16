"""
FileName: 018.py
Author: Fatpandac
Create: 2021/11/16
Description: If the elements of the array are same, then return 0.
             If the elements of the array are not same, then return 1.
             If the some elements of the array are same, then return 2.
"""

def main(lst):
    if sum(lst)/len(lst) == lst[0]:
        return 0
    elif len(lst) == len(set(lst)):
        return 1
    else:
        return 2
