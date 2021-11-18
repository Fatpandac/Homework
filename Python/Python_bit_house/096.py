"""
FileName: 096.py
Author: Fatpandac
Create: 2021/11/18
Description: Password strength judgment.
"""

def lenght_judge(pwd):
    if len(pwd) < 6:
        return False
    else:
        return True

def have_number(password):
    for i in password:
        if i.isdigit():
            return True
    return False

def have_upper(password):
    for i in password:
        if i.isupper():
            return True
    return False

def have_lower(password):
    for i in password:
        if i.islower():
            return True
    return False

def have_special_char(password):
    for i in password:
        if i in '.,':
            return True
    return False

def main(pwd):
    check_list = [lenght_judge, have_number, have_lower,have_upper, have_special_char]
    checkout_list = [i(pwd) for i in check_list]
    if not checkout_list[0]:
        return 'weak'
    elif sum(checkout_list[1:]) == 4:
        return 'strong'
    elif sum(checkout_list[1:]) == 3:
        return 'above_middle'
    elif sum(checkout_list[1:]) == 2:
        return 'below_middle'
    elif sum(checkout_list[1:]) == 1:
        return 'weak'
    else:
        return 'weak'
