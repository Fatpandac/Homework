"""
FileName: 027.py
Author: Fatpandac
Create: 2021/11/17
Description: Given two dates, return the number of days between them.
"""

from datetime import date

def main(year1, month1, day1, year2, month2, day2):
    return (date(year2, month2, day2) - date(year1, month1, day1)).days

