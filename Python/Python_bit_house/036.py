"""
FileName: 036.py
Author: Fatpandac
Create: 2021/11/17
Description: Parallel resistance value calculation.
"""

def main(*para):
    return round(1 / sum(map(lambda x: 1/x, para)), 1)
