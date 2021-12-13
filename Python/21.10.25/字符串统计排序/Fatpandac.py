sentence = input()
dict_char = {}

for i in sentence:
    dict_char[i] = dict_char.get(i, 0) + 1
list_char = sorted(dict_char.items(), key=lambda i: i[1], reverse=True)

for i in range(len(list_char)):
    key, value = list_char[i]
    print("{}-{}{}".format(key, value, "\n" if (i + 1) % 4 == 0 else " "),
          end="")

    
