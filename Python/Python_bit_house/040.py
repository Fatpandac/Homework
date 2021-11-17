"""
FileName: 040.py
Author: Fatpandac
Create: 2021/11/17
Description: If given a string, return a tuple with two elements, the first one
             is s encoded by UTF-8, the second one is s encoded by GBK, else 
             return '参数必须为字符串'
"""

def main(s):
    return (s.encode('utf-8'), s.encode('gbk')) if isinstance(s, str) \
            else '参数必须为字符串'
