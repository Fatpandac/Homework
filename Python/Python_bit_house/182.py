"""
FileName: 182.py
Author: Fatpandac
Create: 2021/11/22
Description: Creating a class named Student, which has constructor and methods
             of __str__, __repr__. Given a class of Student, return a tuple 
             with two elements: the elements are student serialization and 
             student deserialization.
"""

from pickle import dumps, loads

class Student:
    def __init__(self, username, sex, age):
        '''username is strings，sex is 'Female' or 'Male'，age is integer'''
        self.username = username
        self.sex = sex
        self.age = age

    def __str__(self):
        return str(self.__dict__)
    __repr__ = __str__

    def __getstate__(self):
        state = self.__dict__.copy()
        if self.sex == 'Female':
            del state['age']
        return state
    def __setstate__(self, state):
        age = 18 if state['sex'] == 'Female' else state['age']
        self.__init__(state['username'], state['sex'], age)


def main(stu):
    stu_dumped = dumps(stu)
    return (stu_dumped, loads(stu_dumped))
