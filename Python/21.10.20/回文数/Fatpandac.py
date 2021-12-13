def loop(x):
    if x == int(str(x)[::-1]):
            return True
    return False


n, m = map(int, input().split())
print("\n".join(map(str, filter(loop, range(n, m + 1)))))
