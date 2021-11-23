"""
FileName: 190.py
Author: Fatpandac
Create: 2021/11/23
Description: Given a integer of port and a string of port type, return the 
             service name.
"""

import socket

def main(port, protocol):
    try:
        return socket.getservbyport(port, protocol)
    except socket.error:
        return '端口号或协议错误'
