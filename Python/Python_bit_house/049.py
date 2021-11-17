"""
FileName: 049.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a number, return 'A' if the number is between 100 and 90,
             return 'B' if the number is between 89 and 80, return 'C' if the 
             number is between 79 and 70, return 'D' if the number is between
             69 and 60, return 'F' if the number is between 59 and 0, other 
             return '数据不对'.
"""

def main(score):
    return 'A' if score >= 90 and score <= 100 else \
           'B' if score >= 80 and score <  90  else \
           'C' if score >= 70 and score <  80  else \
           'D' if score >= 60 and score <  70  else \
           'F' if score >= 0  and score <  60  else \
           '数据不对'
