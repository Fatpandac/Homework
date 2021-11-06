"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/11/06
Description: Encrypted string.
"""

import re

head_key = input()
head_key = list(sorted(set(head_key),key=head_key.index))
body_key = [chr(i) for i in range(ord('a'), ord('z') + 1) if chr(i) not in head_key]
key = head_key[::-1] + body_key[::-1]
code_book = dict(zip(list([chr(i) for i in range(ord('a'), ord('z') + 1)]),
                                                                      key))
sentence = input()
encrypted_sentence = "".join([code_book.get(i,i) for i in sentence])
print(encrypted_sentence)
