"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/20
Description: Calculate the isomorphic number.
"""

n, m = map(int, input().split())
print("\n".join(map(str, filter(lambda x: int(str(x**2)[-len(str(x)):]) == x, range(n,m + 1)))))
