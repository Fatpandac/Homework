"""
FileName: 160.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a positive integer, if it's even, divide it by 2, if it's 
             odd, multiply it by 3 and add 1. Repeat the process until you 
             reach 1, return the times.
"""

def main(num):
    times = 0
    while num != 1:
        if num % 2 == 0:
            num = num // 2
        else:
            num = num * 3 + 1
        times += 1
    return times

print(main(3))
