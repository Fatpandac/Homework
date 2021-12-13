number = int(input())
print("{} {} {} {}".format(
    number // 10,
    number % 10 // 5,
    number % 10 % 5 // 2,
    number % 10 % 5 % 2 // 1,
    ))
