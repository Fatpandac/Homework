import math

number = input()
total  = sum(map(math.factorial, map(int, number)))
print("{},{}!={}\n{}".format(number,
                             "!+".join(map(str, map(int, number))),
                             total,
                             "Yes" if int(number) == total else "No"))

