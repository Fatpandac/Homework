"""
FileName: 161.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a string, replace 'P' with '!' and 'y' with '@' and 't' with
             '#' and 'h' with '$' and 'o' with '%' and 'n' with '^', delete 
             'a', 'b', 'c' and 'd', other characters are unchanged then return.
"""

change_dict = {
        'P': '!',
        'y': '@',
        't': '#',
        'h': '$',
        'o': '%',
        'n': '^',
        'a': '' ,
        'b': '' ,
        'c': '' ,
        'd': ''
        }

def main(s):
    for i in change_dict:
        s = s.replace(i, change_dict[i])
    return s
