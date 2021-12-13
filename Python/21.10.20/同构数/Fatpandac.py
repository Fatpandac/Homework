n, m = map(int, input().split())
print("\n".join(map(str, filter(lambda x: int(str(x**2)[-len(str(x)):]) == x,
                                range(n,m + 1)))))
