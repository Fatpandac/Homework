a, b = map(int, input().split())
print('\n'.join(map(str, filter(lambda x: str(x**2).endswith(str(x)), range(a, b+1)))))

