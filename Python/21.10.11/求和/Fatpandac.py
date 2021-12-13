times = int(input())
print(sum(list(map(sum, [list(range(1, i)) for i in range(2, times + 2)]))))
