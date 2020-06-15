import sys


def main():
    a = list(map(int, sys.stdin.buffer.readline().decode().split()))
    plus = ["", " + "]
    minus = ["-", " - "]
    symbols = ["x^2", "xy", "y^2", "x", "y"]
    flag = False
    for i in range(5):
        if a[i]:
            sys.stdout.buffer.write(((plus[flag] if a[i] > 0 else minus[flag]) +
                                     f"{abs(a[i]) if abs(a[i]) > 1 else ''}" + symbols[i]).encode())
            flag = True
    if a[5]:
        if flag:
            sys.stdout.buffer.write(
                ((" + %d" if a[5] > 0 else " - %d") % abs(a[5])).encode())
        else:
            sys.stdout.buffer.write(f"{a[5]}".encode())
    elif not flag:
        sys.stdout.buffer.write('0'.encode())


if __name__ == "__main__":
    main()
