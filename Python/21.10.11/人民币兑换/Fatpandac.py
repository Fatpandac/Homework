"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/11
Description: input a number less than 100 with minimum combination instead by 10, 5, 2 and 1.
"""

number = int(input())
print("{} {} {} {}".format(
    number // 10,
    number % 10 // 5,
    number % 10 % 5 // 2,
    number % 10 % 5 % 2 // 1,
    ))
