"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/23
Description: Input a integer, it's a reversible primes output "yes", other is "no".
"""

def isPrime(number):
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

def isReversiblePrimes(number):
    if isPrime(number):
        if isPrime(int(str(number)[::-1])):
            return True
    return False

print("{}".format("yes" if isReversiblePrimes(int(input())) else "no"))
