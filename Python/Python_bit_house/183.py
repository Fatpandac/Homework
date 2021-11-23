"""
FileName: 183.py
Author: Fatpandac
Create: 2021/11/22
Description: Given a IPv4 address with string, return hexadecimal format.
"""

from struct import unpack
from socket import inet_aton

def main(ip):
    return hex(unpack('!I', inet_aton(ip))[0])
