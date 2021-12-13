import re

print(re.sub(r'\b_','',
      re.sub(r'[A-Z]',lambda a: '_' + a.group().lower(),
             input())))
