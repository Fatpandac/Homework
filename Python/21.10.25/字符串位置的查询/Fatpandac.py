"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/28
Description: Write a function called strrindex(s, t),
             that can return index of t in s.
"""

import re

def strrindex(s, t):
    return len(s) - re.search(r'{}'.format(t[::-1]), s[::-1]).span()[1]

print(strrindex(input(),input()))

