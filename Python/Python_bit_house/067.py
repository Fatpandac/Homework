"""
FileName: 067.py
Author: Fatpandac
Create: 2021/11/18
Description: Given two numbers, return since the start of the first num is a 
             prime number. 
"""

def isPrime(k):
    if k in (2,3):
        return True
    if k%2 == 0:
        return False
    for i in range(3, int(k**0.5)+2, 2):
        if k%i == 0:
            return False
        return True

def main(start, num):
    prime_list = []
    while True:
        if isPrime(start):
            prime_list.append(start)
            if len(prime_list) == num:
                break
        start += 1
    return prime_list[num - 1]
