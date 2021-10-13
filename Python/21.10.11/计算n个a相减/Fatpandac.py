"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/11
Description: Input number and times to calculate "aa...a - aa..a - a"
"""

from functools import reduce
num, times = input().split(" ")
number_list = []
for i in range(int(times),0,-1):
    number_list.append(int(num*i))
print(reduce(lambda x, y: x - y,number_list))
