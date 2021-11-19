"""
FileName: 119.py
Author: Fatpandac
Create: 2021/11/19
Description: Given some tuple, return a tuple of sum by the absolute pisition 
             of the element else return '数据不符合要求'.
"""

def same_len(*tups):
    return all(map(lambda x: len(x) == len(tups[0]), tups))

def element_is_num(*tups):
    for i in tups:
        for j in i:
            if not isinstance(j, (int, float, complex)):
                return False
    return True

def main(*tups):                                      
    if same_len(*tups) and element_is_num(*tups):     
        return tuple(map(lambda x: sum(x), zip(*tups)))
    else:                                             
        return '数据不符合要求'
