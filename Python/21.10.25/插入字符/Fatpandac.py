def insert(string, c):
    for i in string:
        if ord(i) > ord(c):
            return string.replace(i, c + i)
    return string + c

def main():
    print(insert(input(),input()))

if __name__ == "__main__":
    main()
