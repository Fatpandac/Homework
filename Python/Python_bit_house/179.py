"""
FileName: 179.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a list of numbers, return diemnsion of the list.
"""

import numpy as np

def main(arr):
    return len(np.shape(arr))
