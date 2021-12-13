import re

def strrindex(s, t):
    return len(s) - re.search(r'{}'.format(t[::-1]), s[::-1]).span()[1]

print(strrindex(input(),input()))

