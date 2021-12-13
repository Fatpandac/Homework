s = input()

my_dict = {}

for i in s:
    my_dict[i] = my_dict.get(i, 0) + 1

for index, item in enumerate(sorted(my_dict.items(), key=lambda x: x[-1], reverse=True), start=1):
    print(f'{item[0]}-{item[1]}', end='{}'.format(' ' if index % 4 else '\n'))

