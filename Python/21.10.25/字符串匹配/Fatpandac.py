"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/25
Description: t is end of s then strend(s,t) return 1 other 0.
"""

def strend(s, t):
    return s[-len(t):] == t

def main():
    print("{}".format("Yes" if strend(input(), input()) else "No"))

if __name__ == "__main__":
    main()
