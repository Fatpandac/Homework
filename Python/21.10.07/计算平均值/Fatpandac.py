x,y,z = map(int,input().split())
print("{sum}\n{ave:.2f}".format(
    sum = x + y + z,
    ave = (x + y + z)/3,
    ))
