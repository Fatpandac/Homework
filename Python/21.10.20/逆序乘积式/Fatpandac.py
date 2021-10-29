"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/20
Description: Product of two number and the reverse order of their product is same. 
"""

m, n = input().split()
print("{}*{}{}{}*{}".format(m,
                            n,
                            "=" if int(m)*int(n) == int(m[::-1])*int(n[::-1]) 
                            else "!=",
                            int(m[::-1]),
                            int(n[::-1])))
