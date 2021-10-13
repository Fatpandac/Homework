"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/11
Description: Get sum of "s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)"
"""

times = int(input())
print(sum(list(map(sum, [list(range(1, i)) for i in range(2, times + 2)]))))
