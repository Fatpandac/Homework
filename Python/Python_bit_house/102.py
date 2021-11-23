"""
FileName: 102.py
Author: Fatpandac
Create: 2021/11/19
Description: Caesar encryption.
"""

def main(s, k):
    res = ''
    for i in s:
        if i.isalpha():
            if i.isupper():
                res += chr((ord(i) - ord('A') + k) % 26 + ord('A'))
            else:
                res += chr((ord(i) - ord('a') + k) % 26 + ord('a'))
        else:
            res += i
    return res
