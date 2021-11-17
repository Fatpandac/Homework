"""
FileName: 024.py
Author: Fatpandac
Create: 2021/11/17
Description: A file have integer numbers split by half Angle of a comma in 
             English. Read it and return a list of elements muliples by 10.
"""

def main():
    with open("data24.txt") as f:
        data = f.read().split(",")
    return [int(i) * 10 for i in data]

print(main())
