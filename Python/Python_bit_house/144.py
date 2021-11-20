"""
FileName: 144.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, check it's IPv4 address format, or not.
"""

def main(s):
    return s.count('.') == 3 and \
            all(i.isdigit() and 0 <= int(i) <= 255 for i in s.split('.'))
