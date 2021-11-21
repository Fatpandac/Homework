"""
FileName: 176.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a list of strings, return a list of them with repeat words 
             less than half.
"""

def main(comments):
    return [sentence for sentence in comments \
            if len(sentence)//2 < len(set(sentence))]
