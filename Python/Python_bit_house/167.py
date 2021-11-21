"""
FileName: 167.py
Author: Fatpandac
Create: 2021/11/21
Description: Given three arguments iterable, operator, and num, where iterable
             just is integer or real number, operator is one of +, -, *, /, // 
             and **, and num is integer or real number, return the result of 
             iterable operator num.
"""

def main(iterable, operator, num):
    if not all(isinstance(i, (int, float)) for i in iterable):
        return '参数iterable必须是只包含整数或实数的可迭代对象。'
    elif not isinstance(num, (int, float)):
        return '参数num必须是整数或实数。'
    elif operator not in ('+', '-', '*', '/', '//', '**'):
        return '不识别的运算符。'
    else:
        return tuple(eval(str(i) + operator + str(num)) for i in iterable)
