"""
FileName: 139.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a string called pwd, check it only has lowercase letters, 
             uppercase letters, digits and ',._' by regular. If there is return
             True else False.
"""

import re

def main(pwd):
    return True if ''.join(re.findall(r'[a-zA-Z]|[0-9]|[,._]', pwd)) == pwd \
                else False
