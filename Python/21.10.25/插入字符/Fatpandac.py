"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/28
Description: Write a function called insert(string, c), it can set c in string and sort.
"""

def insert(string, c):
    for i in string:
        if ord(i) > ord(c):
            return string.replace(i, c + i)
    return string + c

def main():
    print(insert(input(),input()))

if __name__ == "__main__":
    main()
