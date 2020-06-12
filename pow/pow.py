import sys

def main():
    r, t = map(int, sys.stdin.buffer.readline().split())
    sys.stdout.buffer.write(str(pow(r, t, 10**9 + 7)).encode())

if __name__ == "__main__":
    main()
