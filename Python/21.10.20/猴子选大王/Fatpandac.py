"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/20
Description: Get monkey king in a group of monkeys.
"""

n,m,q=map(int,input().split())

monkeys = list(range(1, n + 1))
q -= 2
while (len(monkeys) != 1):
    q = ( q + m ) % len(monkeys)
    del monkeys[q]
    q -= 1
print(monkeys[0])

