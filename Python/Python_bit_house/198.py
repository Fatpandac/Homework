"""
FileName: 198.py
Author: Fatpandac
Create: 2021/11/23
Description: Given a tuple with some integers, return a new tuple with more 
             than average number of elements.
Requirements:
    - Don't use lambda function
    - Don't use filter function
"""

def main(data):
    return tuple(x for x in data if x > sum(data) / len(data))
