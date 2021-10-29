"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/23
Description: Calculate a number by sum of consecutive integers.
"""

number = int(input())
total = 0
for start in range(1, number):
    for i in range(start, number):
        total += i
        if total == number:
            print("{}={}".format(number, "+".join(map(str,
                                                  range(start, i + 1)))))
            exit()
        elif total > number:
            start, total = start + 1, 0
            break
print("No Answer")
