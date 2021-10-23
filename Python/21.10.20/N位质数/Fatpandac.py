"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/20
Description: Calculate the N digits of prime numbers.
"""

def isPrime(number):
    if number == 2:
        return True
    elif number % 2 == 0 or str(number)[0] == "1":
        return False
    for i in range(3, int(number ** 0.5) + 1, 2):
        if number % i == 0:
            return False
    return True

def isSpecialPrime(number):
    if not isPrime(number):
        return False
    for i in range(len(str(number))):
        for j in range(i):
            if not isPrime(int(str(number)[:j+1])):
                return False
    return True

N = int(input())
print("\n".join(map(str, filter(isSpecialPrime, range(10**(N-1), 10**N)))))
