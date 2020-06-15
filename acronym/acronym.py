import sys


def main():
    lst = sys.stdin.buffer.readline().split()
    print("o'_'o" if len(lst) == len(lst[0]) and all(
        [e[0] | 1 << 5 == lst[0][i] | 1 << 5 for i, e in enumerate(lst)]) else "QQ")


if __name__ == "__main__":
    main()
