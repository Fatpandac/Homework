"""
FileName: 108.py
Author: Fatpandac
Create: 2021/11/19
Description: Given two numbers not both zero, return '符号相同' if they have 
             the same sign, '符号不相同' if they have different signs.
"""

def mian(num1, num2):
    return '符号相同' if num1 * num2 > 0 else '符号不相同'
