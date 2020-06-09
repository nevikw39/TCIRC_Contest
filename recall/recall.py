import sys
n, a, b = map(int, sys.stdin.buffer.readline().decode().split())
sys.stdout.buffer.write((("!!666\n%d" if a >= n / 4 and a > b else "QQ~~\n%d") % (n - a - b)).encode())