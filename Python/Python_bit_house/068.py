"""
FileName: 068.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a numbers , return True if it's ugly number, otherwise 
             return False.
"""

def main(num):
    if num == 1:
        return True
    if num % 2 == 0:
        return main(num // 2)
    if num % 3 == 0:
        return main(num // 3)
    if num % 5 == 0:
        return main(num // 5)
    return False
