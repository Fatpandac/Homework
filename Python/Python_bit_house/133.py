"""
FileName: 133.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a number n, return '无效参数' if n isn't a integer or less 
             than and equal to 0, otherwise return the first n fibonacci.
"""

def main(n):
    if not isinstance(n, int) or n < 0:
        return '无效参数'
    else:
        fib = [0, 1]
        for i in range(2, n + 1):
            fib.append(fib[i - 1] + fib[i - 2])
        return fib[n]
