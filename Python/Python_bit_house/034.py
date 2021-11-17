"""
FileName: 034.py
Author: Fatpandac
Create: 2021/11/17
Description: Class of Number is simular to the class of Integer. The 
             constructor given a integer and can add of two Number and can use 
             print to output the value of the Number.
"""

class Number:
    def __init__(self, value):
        self.value = value

    def __add__(self, another):
        return Number(self.value + another.value)

    def __str__(self):
        return str(self.value)

def main(x, y):
    return x + y
