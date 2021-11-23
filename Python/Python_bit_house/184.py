"""
FileName: 184.py
Author: Fatpandac
Create: 2021/11/22
Description: Given a ip address with hexadecimal format, convert it to decimal 
             format.
"""

from struct import pack
from socket import inet_ntoa

def main(hex_ip):
    return inet_ntoa(pack('!I', int(hex_ip, 16)))
