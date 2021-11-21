"""
FileName: 175.py
Author: Fatpandac
Create: 2021/11/21
Description: Recommend movies to a user.
"""

def mian(data, user):
    same_dict = {}
    for i, j in data.items():
        same_dict[i] = sum(i in user for i in j)
    same_dict = dict(sorted(same_dict.items(), key=lambda x: x[1], reverse=True))
    same_user = list(same_dict.keys())[0]
    return (same_user, min(set(data[same_user]).difference(set(user))))
