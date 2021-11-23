"""
FileName: 189.py
Author: Fatpandac
Create: 2021/11/23
Description: Translate 'rwxrwxrwx' to number like '777'
"""

def main(mode):
        return int(''.join(str(int(i in 'rwx')) for i in mode), 2)
