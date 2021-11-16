"""
FileName: 014.py
Author: Fatpandac
Create: 2021/11/16
Description: Return the maximun absolute number in a list.
"""

def main(lst):
    return dict(zip(map(abs, lst), lst)).get(max(map(abs, lst)))
