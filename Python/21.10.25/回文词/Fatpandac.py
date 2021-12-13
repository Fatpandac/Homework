with open("palin.in", "r") as f:
    N = int(f.readline())
    string = f.readline().replace("\n", "")

reverse_string = string[::-1]
count = 0
for i in range(1, N + 1):
    for j in range(N - i + 1):
        if reverse_string[j: j + i] in string:
            count = i

with open("palin.out", "w") as f:
    f.write(str(N - count))
