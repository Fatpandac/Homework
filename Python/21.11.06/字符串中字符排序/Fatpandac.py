"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/11/07
Description: Delete the same char.
"""

import re

text = input()
print(re.sub(r'(\w)\1*', r'\1',"".join(sorted(text))))
