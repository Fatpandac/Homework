"""
FileName: absolute_prime.py
Author: Fatpandac
Create: 2021/10/17
Description: calculate the absolute prime between m and n.
"""

def absolute(number):
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

m, n = map(int, input().split())
print("\n".join([
                str(i)[::-1] for i in
                map(str, filter(absolute, map(int, [str(i)[::-1] for i in 
                filter(absolute, range(m, n + 1)) if i > 1
                ])))]))
