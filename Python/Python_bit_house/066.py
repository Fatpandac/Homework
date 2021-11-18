"""
FileName: 066.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a number, return a string split by comma if it's integer,
             otherwise return '数据错误'.
"""

def main(num):
    return ','.join(str(num)) if isinstance(num, int) else '数据错误'
