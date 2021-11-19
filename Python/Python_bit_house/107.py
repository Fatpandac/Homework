"""
FileName: 107.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a number of hours, if hours in [6,18), return '现在是白天',
             if in [0,6) or [18,24), return '现在是晚上', otherwise return 
             '不是有效时间'.
"""

def main(hour):
    if 6 <= hour < 18:
        return '现在是白天'
    elif 0 <= hour < 6 or 18 <= hour < 24:
        return '现在是晚上'
    else:
        return '不是有效时间'
