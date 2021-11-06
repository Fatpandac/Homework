"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/11/06
Description: Expanding sentence.
"""

import re

def expand(s1, s2):
    if ord(s1) < ord(s2):
        return "".join(map(chr, list(range(ord(s1),ord(s2) + 1))))
    else:
        return f'{s1}-{s2}'

sentence = input()
find_key = re.findall(r'(?=(\w-\w))', sentence)
for i in find_key:
    sentence = sentence.replace(i, expand(i[0], i[-1]))
print(sentence)
