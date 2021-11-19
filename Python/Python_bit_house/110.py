"""
FileName: 110.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a number bewteen 1 and 20 called k, return the largest prime
             number that index k. Replace underline to code.

def main(k):
    index = 0
    for num in range(2, 101)[::-1]:
        for i in range(2, int(num**0.5)+1):
            if num%i == 0:
                _____
        else:
            index = index + 1
            if index == k:
                return num
"""

def main(k):
    index = 0
    for num in range(2, 101)[::-1]:
        for i in range(2, int(num**0.5)+1):
            if num%i == 0:
                break
        else:
            index = index + 1
            if index == k:
                return num
