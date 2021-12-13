number_1, number_2 = input().split(" ")
number_1_factor = [i for i in range(1,int(number_1)) if int(number_1) % i == 0]
number_2_factor = [i for i in range(1,int(number_2)) if int(number_2) % i == 0]
print("{},{}={}\n"
      "{},{}={}\n"
      "{}".format(number_1,'+'.join(map(str,number_1_factor)),
                  sum(map(int,number_1_factor)),
                  number_2,'+'.join(map(str,number_2_factor)),
                  sum(map(int,number_2_factor)),
                  int(
                      int(number_2) == sum(map(int,number_1_factor)) and
                      int(number_1) == sum(map(int,number_2_factor))
                     )))
