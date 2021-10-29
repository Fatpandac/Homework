"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/25
Description: Formatting code.
"""

import re

print(re.sub(r'\b_','',
      re.sub(r'[A-Z]',lambda a: '_' + a.group().lower(),
             input())))
