"""
FileName: 003.py
Author: Fatpandac
Create: 2021/11/16
Description: Return index of item in list else return '不存在'.
"""

def main(lst, item):
    try:
        return lst.index(item)
    except:
        return '不存在'
