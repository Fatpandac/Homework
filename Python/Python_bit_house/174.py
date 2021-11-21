"""
FileName: 174.py
Author: Fatpandac
Create: 2021/11/21
Description: Given a object, if obj not is dict return '参数必须是字典。', if value not is same type return '字典的值必须是同一种类型。' else return True.
"""

def main(obj):
    if not isinstance(obj, dict):
        return '参数必须是字典。'
    elif not all(isinstance(i, list(obj.values())[0]) for i in obj.values()):
        return '字典的值必须是同一种类型。'
    else:
        for key, value in d.items():
            if value == max(d.values()):
                return key
