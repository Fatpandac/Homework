"""
FileName: 045.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a list, if it all is the same of string, return the biggest 
             string else return '数据格式不正确'.
"""

def main(lst):
    return max(lst, key=lambda x: x.lower()) if \
               isinstance(lst, list) or all(isinstance(i, str) for i in lst) \
               else '数据格式不正确'
