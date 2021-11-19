"""
FileName: 118.py
Author: Fatpandac
Create: 2021/11/20
Description: Reading a csv file, given a number called flag, return the longest
             times of talk time at 8:00 to 9:00 of user name and time by tuple 
             if flag is 0, return the longest times of talk time at other time 
             of user name and time by tuple if flag is 1.
"""

from csv import reader

def main(flag):
    with open('data118.csv', encoding='UTF-8') as file:
        csv_reader = reader(file)
        data = [row for row in csv_reader][1:]
    dict_data = {}
    if flag == 0:
        data = list(filter(lambda x: 8 <= int(x[1][11:13]) < 18, data))
    else:
        data = list(filter(lambda x: not (8 <= int(x[1][11:13]) < 18), data))
    for row in data:
        if row[0] in dict_data.keys():
            dict_data[row[0]] = dict_data[row[0]] + int(row[2])
        else:
            dict_data[row[0]] = int(row[2])
    return sorted(dict_data.items(), key=lambda x: x[1], reverse=True)[0]
