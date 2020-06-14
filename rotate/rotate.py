import sys
import math

def main():
    a, b = map(int, sys.stdin.buffer.readline().split())
    sys.stdout.buffer.write(str(b // math.gcd(a, b)).encode())

if __name__ == "__main__":
    main()