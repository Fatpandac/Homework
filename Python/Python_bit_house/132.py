"""
FileName: 132.py
Author: Fatpandac
Create: 2021/11/20
Description: Fix the bug of the code.

grades = {'A': (90,101), 'B': (80,90),
          'C': (70,80), 'D': (60,70),
          'F':(0,60)}

def main(score):
    if score<0 or score>100:
        return '无效成绩。'
    for grade, value in grades.items():
        if int(score) in range(value):
            return grade
"""

grades = {'A': (90,101), 'B': (80,90),
          'C': (70,80), 'D': (60,70),
          'F':(0,60)}

def main(score):
    if score<0 or score>100:
        return '无效成绩。'
    for grade, value in grades.items():
        if int(score) in range(value[0], value[1]):
            return grade

