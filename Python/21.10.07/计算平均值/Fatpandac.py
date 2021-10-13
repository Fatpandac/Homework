"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/07
Description: Calculate the average of the x, y and z.
"""

x,y,z = map(int,input().split())
print("{sum}\n{ave:.2f}".format(
    sum = x + y + z,
    ave = (x + y + z)/3,
    ))
