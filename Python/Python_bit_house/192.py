"""
FileName: 192.py
Author: Fatpandac
Create: 2021/11/23
Description: Given some integer, use for loop to caculate sum of all the 
             integers and return the result.
"""

def main(*numbers):
    sum = 0
    for number in numbers:
        sum += number
    return sum
