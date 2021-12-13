import math
from functools import reduce

e = float(input())
times = 2
pi = 1.0 + 1/3
while True:
    times += 1
    pi += float(math.factorial(times - 1) / reduce(lambda x, y : x * y,
                range(3, 2 * times, 2)))
    if (pi * 2) > e:
        pi -= float(math.factorial(times - 1) / reduce(lambda x, y : x * y,
                    range(3, 2 * times, 2)))
        times -= 1
        print("{:.7f} {}".format(pi * 2, times))
        break
