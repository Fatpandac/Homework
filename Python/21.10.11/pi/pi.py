"""
FileName: pi.py
Author: Fatpandac
Create: 2021/10/12
Description: Calculates the pi by "[2n/(2n-1)*2n/(2n+1)]".
"""

e = float(input())
times = 0
pi = 1.0
while True:
    times += 1
    pi *= ((2.0 * times) / (2.0 * times - 1.0)) * \
           ((2.0 * times) / (2.0 * times + 1.0))
    if (pi * 2) > e:
        pre_times = times - 1
        pre_pi = pi / (((2.0 * times) / (2.0 * times - 1.0)) * \
                       ((2.0 * times) / (2.0 * times + 1.0)))
        if abs((pi * 2) - e) > abs(e - (pre_pi * 2)):
            times, pi = pre_times, pre_pi
        break
print("{:.9f} {}".format((pi * 2), times))
