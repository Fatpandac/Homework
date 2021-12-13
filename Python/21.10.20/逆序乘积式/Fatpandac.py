m, n = input().split()
print("{}*{}{}{}*{}".format(m,
                            n,
                            "=" if int(m)*int(n) == int(m[::-1])*int(n[::-1]) 
                            else "!=",
                            int(m[::-1]),
                            int(n[::-1])))
