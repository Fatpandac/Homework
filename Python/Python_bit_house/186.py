"""
FileName: 186.py
Author: Fatpandac
Create: 2021/11/22
Description: Firewall.
"""

Firewall = {
        1433: '192.168.1.88',
        3389: '192.168.1.99',
        80  : '*'
        }

def main(host, port):
    if Firewall.get(port) == '*':
        return True
    elif Firewall.get(port) == host:
        return True
    else:
        return False
