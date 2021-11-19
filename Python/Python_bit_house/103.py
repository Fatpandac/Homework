"""
FileName: 103.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a string, return value of MD5 hash of the string encoded in 
             GBK.
"""

import hashlib

def main(s):
    return hashlib.md5(s.encode('gbk')).hexdigest()
