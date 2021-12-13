N = int(input())

lst = []
for i in range(N):
    lst.append(input())

print(max(lst, key=lst.count))


