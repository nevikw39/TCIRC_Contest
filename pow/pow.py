import os

def main():
    r, t = map(int, os.read(0, 100).split())
    os.write(1, str(pow(r, t, 10**9 + 7)).encode())

if __name__ == "__main__":
    main()
