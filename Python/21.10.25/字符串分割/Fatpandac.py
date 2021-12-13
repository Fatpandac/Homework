import re
from functools import reduce

metachar = "\*.?+-$^[](){}|/"

str, tok = input(), input()
print("\n".join(filter(lambda x: x != "", re.split(r'[{}]'.format(
                reduce(lambda x, y: x + y, ["\\{}".format(i)
                                                    if i in metachar else
                                                    i for i in tok])), str))))
