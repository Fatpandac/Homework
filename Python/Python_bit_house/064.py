"""
FileName: 064.py
Author: Fatpandac
Create: 2021/11/18
Description: Given a string of date, return a string of date in the format of 
             "YYYY-MM-DD HH:MM:SS".
"""

def main(s):
    date, time = s.split()
    return '-'.join(['{:0>2d}'.format(int(i)) for i in date.split('-')]) \
           + ' ' + \
	       ':'.join(['{:0>2d}'.format(int(i)) for i in time.split(':')])
