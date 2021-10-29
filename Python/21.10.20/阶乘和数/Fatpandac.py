"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/20
Description: Determine whether the factorial of a number and its respective numbers are equal.
"""

import math

number = input()
total  = sum(map(math.factorial, map(int, number)))
print("{},{}!={}\n{}".format(number,
                             "!+".join(map(str, map(int, number))),
                             total,
                             "Yes" if int(number) == total else "No"))

