def strend(s, t):
    return s[-len(t):] == t

def main():
    print("{}".format("Yes" if strend(input(), input()) else "No"))

if __name__ == "__main__":
    main()
