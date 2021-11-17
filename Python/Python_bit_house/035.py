"""
FileName: 035.py
Author: Fatpandac
Create: 2021/11/17
Description: Class of Number is simular to the class of integer or real number.
             Given a integer or real number to value, value is 0 if given not a
             integer or real number.
"""

class Number:
    def __init__(self, value):
        self._value = value if isinstance(value, int) or \
                               isinstance(value, float) else 0

    def __set(self, value):
        if isinstance(value, int) or isinstance(value, float):
            self._value = value

    def __get(self):
        return self._value

    value = property(__get, __set)
    
def main(x, y):
    obj = Number(x)
    obj.value = y
    return (type(obj), obj.value)
