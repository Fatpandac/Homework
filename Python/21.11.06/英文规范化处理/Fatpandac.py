"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/11/06
Description: Formatting English sentence.
"""

import re

sentence = input()
print(re.sub(r'^\w|\bi\b|\. \w', lambda a: a.group().upper(), sentence.lower()))
