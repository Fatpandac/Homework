"""
FileName: 187.py
Author: Fatpandac
Create: 2021/11/22
Description: Given two integers of n and m, n is money, m is the number of 
             chicken. five yuan a rooster, three yuan a hen, one yuan of three
             chicken. return all the possible ways to buy the chicken.
"""

def main(n, m):
    combinations = ()
    for i in range(n//5):
        for j in range(m-i):
            if (i*5) + (j*3) + (m-i-j)//3 == n and (m-i-j)%3 == 0:
                combinations += ((i, j, m-i-j),)
    return combinations

print(main(100,50))
