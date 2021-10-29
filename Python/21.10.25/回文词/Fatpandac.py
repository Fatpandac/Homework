"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/28
Description: Read a file called palin.in as N and string the output how many 
             words are needed to form a palindrome.
"""

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
