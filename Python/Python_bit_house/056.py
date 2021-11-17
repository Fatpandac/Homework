"""
FileName: 056.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list, if element is same , return 0, if element is 
             different , return 1, otherwise return 2.
"""

def main(lst):
    return 0 if len(set(lst)) == 1 else \
           1 if len(set(lst)) == len(lst) else \
           2
