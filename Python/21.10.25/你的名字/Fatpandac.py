"""
FileName: name.py
Author: Fatpandac
Create: 2021/10/25
Description: Formatting name.                                              
"""

name = [ i.capitalize() for i in input().split() ]
print(" ".join([name[i] if i == 0 or i == (len(name) - 1) else \
                "{}.".format(name[i][0]) for i in range(len(name))]))
