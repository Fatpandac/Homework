from functools import reduce

def str_bin(str1, str2):
    return reduce(lambda x, y: x + y, sorted(str1 + str2))

print(str_bin(input(),input()))
