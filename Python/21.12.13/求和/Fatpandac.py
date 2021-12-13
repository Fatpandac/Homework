n = int(input())

print(sum(map(sum, map(lambda x: range(1, x+1), range(1, n+1)))))

