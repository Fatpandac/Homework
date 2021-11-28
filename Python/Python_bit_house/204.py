"""
FileName: 204.py
Author: Fatpandac
Create: 2021/11/28
Description: Geiven a list named data and some list of lists named iterables,
             return a list different from data in which the elements of 
             iterables.
Requirements:
    - Use for loop.
"""

def main(data, *iterables):
    for iterable in iterables:
        for item in iterable:
            if item in data:
                data.remove(item)
    return data
