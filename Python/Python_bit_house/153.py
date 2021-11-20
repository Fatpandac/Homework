"""
FileName: 153.py
Author: Fatpandac
Create: 2021/11/21
Description: Finish the code, let it run and output 12, 1554, 1665.

def main(_):
    pass

print(main(x=3, y=4, z=5))
print(main(a=666, b=888))
print(main(a=666, c=999))
"""

def main(**kwargs):
    return sum(kwargs.values())

print(main(x=3, y=4, z=5))
print(main(a=666, b=888))
print(main(a=666, c=999))
