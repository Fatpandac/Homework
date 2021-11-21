"""
FileName: 180.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, return a new string with change special character 
             to html code.
"""

change_dict = {
    '&': '&amp;',
    '<': '&lt;',
    '>': '&gt;',
    '"': '&quot;',
    "'": '&apos;',
    '©': '&copy;',
    '∠': '&ang;',
    '∅': '&empty;',
    '♣': '&clubs;',
    '∀': '&forall;',
    'δ': '&delta;'
}

def main(s):
    return ''.join(change_dict.get(c, c) for c in s)
