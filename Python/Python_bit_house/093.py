"""
FileName: 093.py
Author: Fatpandac
Create: 2021/11/18
Description: Given three of integers year, month and day, return number of days
             in that year.
"""

def main(year, month, day):
    day_of_Feb = 29 if year % 4 == 0 and year % 100 != 0 or year % 400 == 0 \
                 else 28
    day_of_month = [31, day_of_Feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    return sum(day_of_month[:month - 1]) + day
