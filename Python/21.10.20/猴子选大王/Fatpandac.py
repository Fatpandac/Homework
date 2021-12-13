n,m,q=map(int,input().split())

monkeys = list(range(1, n + 1))
q -= 2
while (len(monkeys) != 1):
    q = ( q + m ) % len(monkeys)
    del monkeys[q]
    q -= 1
print(monkeys[0])

