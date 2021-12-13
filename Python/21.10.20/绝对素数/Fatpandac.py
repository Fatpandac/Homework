def absolute(number):
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

m, n = map(int, input().split())
print("\n".join([
                str(i)[::-1] for i in
                map(str, filter(absolute, map(int, [str(i)[::-1] for i in 
                filter(absolute, range(m, n + 1)) if i > 1
                ])))]))
