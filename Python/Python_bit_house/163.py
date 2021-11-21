"""
FileName: 163.py
Author: Fatpandac
Create: 2021/11/21
Description: Create a class called MyList that inherits from list. Refactor 
             functions of subscript, return None when index is out of range.
"""

class MyList(list):
    def __getitem__(self, index):
        try:
            return super().__getitem__(index)
        except IndexError:
            return None

def main(data, index):
    mylist = MyList(data)
    print(mylist[index])
