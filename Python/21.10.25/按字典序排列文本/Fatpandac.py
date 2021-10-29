"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/28
Description: Input some strings and sort then output them.
"""

l = []
while True:
    try:
        s=input()
        l.append(s)
    except:
        break
l.sort()
print('\n'.join(l))

