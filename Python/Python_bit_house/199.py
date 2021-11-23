"""
FileName: 199.py
Author: Fatpandac
Create: 2021/11/23
Description: Given a tuple with some integers, return a new tuple with more 
             than average number of elements.
Requirements:
    - Don't use lambda function
    - Don't use filter function
    - Don't use generator expression
"""

def main(data):
    avg = sum(data) / len(data)
    more_than_avg = []
    for i in data:
        if i > avg:
            more_than_avg.append(i)
    return tuple(more_than_avg)
