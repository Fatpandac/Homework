"""
FileName: 191.py
Author: Fatpandac
Create: 2021/11/23
Description: Given two strings of service name and protocol, return port number.
"""

import socket

def main(service, protocol):
    try:
        return socket.getservbyname(service, protocol)
    except socket.error:
        return "服务名称或协议错误"
