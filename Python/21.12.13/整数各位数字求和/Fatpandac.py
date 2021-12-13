def sum(x):
    total = 0
    for i in x:
        total += i
    return total


print(sum(map(int, input())))

