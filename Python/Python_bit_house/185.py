"""
FileName: 185.py
Author: Fatpandac
Create: 2021/11/22
Description: Given two objects of datetime called dt1 and dt2, calculate the 
             difference between them in seconds.
"""

from datetime import datetime

def main(dt1, dt2):
    return (abs(dt2 - dt1)).total_seconds()
