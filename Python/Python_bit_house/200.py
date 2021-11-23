"""
FileName: 200.py
Author: Fatpandac
Create: 2021/11/23
Description: A couple of rabbits a month gave birth a pair of rabbits every 
             month, when they had reached the age of three months. A pair of
             rabbits can live of 72 months, after which they die.
             Given a integer of months, how many rabbits will be.
"""

def main(n):
    i = 3
    fibo_list = [0, 1, 1]
    while i <= n:
        if i <= 72:
            sum = fibo_list[i-1] + fibo_list[i-2]
        elif i == 73:
            sum = fibo_list[i-1] + fibo_list[i-2] - 2
        else:
            sum = fibo_list[i-1] + fibo_list[i-2] - fibo_list[i-72]
        fibo_list.append(sum)
        i += 1
    for i in enumerate(fibo_list):
        print(i)
    return fibo_list[n]*2

if __name__ == '__main__':
    print(main(103))
