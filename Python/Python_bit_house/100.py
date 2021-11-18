"""
FileName: 100.py
Author: Fatpandac
Create: 2021/11/19
Description: Reading a file, return number of lenght of the lengest line.
"""

def main():
    with open('data100.txt', 'r') as f:
        return max(len(line) for line in f)

print(main())
