"""
FileName: 148.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a html code, find out content of head and body tag, and 
             return them as a tuple.
"""

import re

def main(s):
    return (re.findall(r'<head>(.*?)</head>',s)[0], \
            re.findall(r'<body>(.*?)</body>',s)[0])
