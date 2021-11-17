"""
FileName: 037.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a number, if it's number of black holes return True, 
             otherwise return False.
"""

def main(n):
    return (n == abs(int("".join(sorted(str(n)))) - \
                     int("".join(sorted(str(n), reverse=True)))))
