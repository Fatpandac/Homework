"""
FileName: 051.py
Author: Fatpandac
Create: 2021/11/17
Description: The Rabbit and Chicken.
"""

def main(n, m):
    return (n-(m-2*n)/2, (m-2*n)/2) if n >= (m-2*n)/2 >= 0 \
           and (m-2*n)/2 == int((m-2*n)/2) else '数据不对'
