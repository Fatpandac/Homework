import re

METACHAR = "\*.?+-$^[](){}|/"

text, p = input(), input()
print(re.sub(r'{}*'.format("".join(["\\{}".format(i) if i in METACHAR else \
                                                    i for i in p])), '', text))

