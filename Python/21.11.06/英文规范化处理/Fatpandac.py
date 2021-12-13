import re

sentence = input()
print(re.sub(r'^\w|\bi\b|\. \w', lambda a: a.group().upper(), sentence.lower()))
