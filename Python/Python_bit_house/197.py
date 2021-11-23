"""
FileName: 197.py
Author: Fatpandac
Create: 2021/11/23
Description: Given a tuple with some integers, return a new tuple with more 
             than average number of elements.
Requirements:
    - Use lambda function
    - Use filter function
"""

def main(data):
    return tuple(filter(lambda x: x > sum(data) / len(data), data))
