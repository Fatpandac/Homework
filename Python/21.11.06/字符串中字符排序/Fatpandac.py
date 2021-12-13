import re

text = input()
print(re.sub(r'(\w)\1*', r'\1',"".join(sorted(text))))
