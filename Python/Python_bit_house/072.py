"""
FileName: 072.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a list of numbers, return even numbers more than eight, if 
             there is no such numbers, return None, if list is's list or 
             element of list is not intger, return '数据不符合要求'.
"""

def main(lst):
    if not isinstance(lst, list) or not all(isinstance(i, int) for i in lst):
        return '数据不符合要求'
    return [i for i in lst if i > 8 and i % 2 == 0] or []
