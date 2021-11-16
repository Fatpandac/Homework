"""
FileName: 017.py
Author: Fatpandac
Create: 2021/11/16
Description: Replace the 0,1,2,3,4,5,6,7,8,9 with 零,一,二,三,四,五,六,七,八,九 and 
             return the new string.
"""

def main(s):
    return s.replace('0','零')\
            .replace('1','一')\
            .replace('2','二')\
            .replace('3','三')\
            .replace('4','四')\
            .replace('5','五')\
            .replace('6','六')\
            .replace('7','七')\
            .replace('8','八')\
            .replace('9','九')
