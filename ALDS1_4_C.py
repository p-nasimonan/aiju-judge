def dictionary(s: set, command, data):
    if command == "insert":
        s.add(data)
    elif command == "find":
        if data in s:
            print("yes")
        else:
            print("no")


def main():
    s = set()
    n = int(input())
    for _ in range(n):
        command, data = input().split()
        dictionary(s, command, data)

if __name__ == "__main__":
    main()