"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/11/06
Description: Search the lengest of substring in sentence.
Copyright: This algorithm is quoted from @labuladong on GitHub.
"""

def find_index(char):
    l, r = 0, len(stack)
    while l < r:
        mid = l + r >> 1
        if stack[mid] > char:
            r = mid
        else:
            l = mid + 1
    return r

sentence = input()
stack = []
for char in sentence:
    if not stack or char > stack[-1]:
        stack.append(char)
    else:
        position = find_index(char)
        if position >= len(stack):
            stack.append(char)
        else:
            stack[position] = char

print(len(stack))
