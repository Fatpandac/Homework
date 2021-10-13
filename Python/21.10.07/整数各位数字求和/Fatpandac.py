"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/07
Description: Description: Calculate the sum of each digit.
"""

def sum(input):
    total = 0
    for i in input:
        total += i
    return total
def main():
    print(sum(map(int,input())))
if __name__ == "__main__":
    main()
