"""
FileName: 106.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a number of seconds with Unix timestamp, return time with 
             format: "YYYY-MM-DD_HH:MM:SS"
"""

import time

def main(seconds):
    return time.strftime("%Y-%m-%d_%H:%M:%S", time.localtime(seconds))
