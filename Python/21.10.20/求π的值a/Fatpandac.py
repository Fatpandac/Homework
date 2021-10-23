"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/23
Description: Calculate the pi by π/2=1+1!/3+2!/(3×5)+3!/(3×5×7)+...+(n-1)!/(3×5×7×...×(2n-1))
"""
import math
from functools import reduce

e = float(input())
times = 2
pi = 1.0 + 1/3
while True:
    times += 1
    pi += float(math.factorial(times - 1) / reduce(lambda x, y : x * y, range(3, 2 * times, 2)))
    if (pi * 2) > e:
        pi -= float(math.factorial(times - 1) / reduce(lambda x, y : x * y, range(3, 2 * times, 2)))
        times -= 1
        print("{:.7f} {}".format(pi * 2, times))
        break
