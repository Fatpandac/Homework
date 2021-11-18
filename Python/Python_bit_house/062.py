"""
FileName: 062.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string, return a number without thousands format if it's a
             numbers with thousands format, otherwise return '数据错误'.
"""

def main(s):
    return int(s.replace(',', '')) \
               if s == '{:,}'.format(int(s.replace(',', ''))) \
               else '数据错误'
