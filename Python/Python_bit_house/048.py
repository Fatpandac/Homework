"""
FileName: 048.py
Author: Fatpandac
Create: 2021/11/17
Description: Given two list of integers or real numbers and them same length,
             if not return '数据不对' else return sum of absolute of minus
             corrsesponding elements.
"""

def main(vector1, vector2):
    return sum(abs(vector1[i] - vector2[i]) for i in range(len(vector1))) if \
           isinstance(vector1, list) and isinstance(vector2, list) \
           and all([isinstance(i, (int, float)) for i in vector1]) \
           and all([isinstance(i, (int, float)) for i in vector2]) \
           and len(vector1) == len(vector2) else '数据不对'
