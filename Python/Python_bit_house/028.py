"""
FileName: 028.py
Author: Fatpandac
Create: 2021/11/17
Description: Given a year, if it is a leap year, return True, otherwise return 
             False.
"""

def main(year):
    return 'yes' if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) \
                    else 'no'
