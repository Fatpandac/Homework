"""
FileName: 086.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a integer, return less than it and the largest prime number.
"""

def main(num):
    for n in range(2, num+1)[::-1]:
        for i in range(2, int(n**0.5)+1):
            if n % i == 0:
                break
        else:
            return n
