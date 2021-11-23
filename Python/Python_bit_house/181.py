"""
FileName: 181.py
Author: Fatpandac
Create: 2021/11/22
Description: Given a string, return a new string with change html code to 
             special character.
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
    'δ': '&delta;',
    'Δ': '&Delta;',
    '←': '&larr;',
    '→': '&rarr;',
    'Ω': '&Omega;',
    'π': '&pi;',
    '≥': '&ge;',

}

def main(s):
    for i, j in change_dict.items():
        s = s.replace(j, i)
    return s
