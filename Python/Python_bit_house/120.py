"""
FileName: 120.py
Author: Fatpandac
Create: 2021/11/19
Description: Given three numbers of year, month, day, return a string of date
             between 8:00 and 17:00.
"""

def main(year, month, day):
    hours = ['{:0>2d}'.format(i) for i in range(9,18)]
    string_date = ['{}-{:0>2d}-{:0>2d} {}:00:00'.format(year, month, day, i) \
                   for i in hours]
    return ','.join(string_date)
