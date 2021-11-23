"""
FileName: 175.py
Author: Fatpandac
Create: 2021/11/21
Description: Recommend movies to a user.
"""

def main(data, user):
    same_user, movies = max(filter(lambda x: x[1] != user,
                        data.items()), key=lambda x: len(x[1] & user))
    return (same_user, min(movies - user))
