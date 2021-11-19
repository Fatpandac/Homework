"""
FileName: 109.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a func, return '递减函数' if the func is decreasing, return
             '非递减函数' if the func is not decreasing.
"""

def main(func):
    return '递减函数' \
           if list(map(func, range(6))) != sorted(map(func, range(6))) else \
           '非递减函数'
