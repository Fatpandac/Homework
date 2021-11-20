"""
FileName: 131.py
Author: Fatpandac
Create: 2021/11/20
Description: Reading a csv file, it's record the hobby of each person. Given a 
             person's name, return his/her hobby.
"""

import csv

def mian(name):
    with open('data131.csv', 'r', encoding='UTF-8') as f:
        reader = list(csv.reader(f))
        hobbis = reader[0][1:]
        for row in reader:
            if row[0] == name:
                return '，'.join(
                    [hobbis[i] for i in range(len(row[1:])) if row[i+1] == "是"])

