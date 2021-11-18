"""
FileName: 089.py
Author: Fatpandac
Create: 2021/11/18
Description: Given two string of origin and userInput, origin is lengther 
             than userInput, statistics same character of the corresponding 
             character position and return.
"""

def main(origin, userInput):
    return sum(map(lambda oc, uc: oc == uc, origin, userInput))
