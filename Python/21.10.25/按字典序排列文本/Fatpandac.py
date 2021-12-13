l = []
while True:
    try:
        s=input()
        l.append(s)
    except:
        break
l.sort()
print('\n'.join(l))

