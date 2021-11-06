"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/11/07
Description: Delete a char in the sentence.
"""

import re

METACHAR = "\*.?+-$^[](){}|/"

text, p = input(), input()
print(re.sub(r'{}*'.format("".join(["\\{}".format(i) if i in METACHAR else \
                                                    i for i in p])), '', text))

