def sum(input):
    total = 0
    for i in input:
        total += i
    return total
def main():
    print(sum(map(int,input())))
if __name__ == "__main__":
    main()
