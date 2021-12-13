number = input()
times = 1
while number != ''.join(reversed(number)):
    revers_number = int(''.join(reversed(number)))
    print("{}:{}+{}={}".format(times,
                               number,
                               revers_number,
int(number) + revers_number))
    number = int(number) + revers_number
    number = str(number)
    times += 1
else:
    print(number)
