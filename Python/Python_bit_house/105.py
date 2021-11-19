"""
FileName: 105.py
Author: Fatpandac
Create: 2021/11/19
Description: Given three numbers of year, month, day, return what day of the 
             date.
"""

import calendar

def main(year, month, day):
    return calendar.weekday(year, month, day) + 1
