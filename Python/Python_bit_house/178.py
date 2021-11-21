"""
FileName: 178.py
Author: Fatpandac
Create: 2021/11/22
Description: Given a tuple of integers and a key of integer, return a tuple 
             with key xor each element of the tuple.
"""

def main(integers, key):
    return tuple(x ^ key for x in integers)
