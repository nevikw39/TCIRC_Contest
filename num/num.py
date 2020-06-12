import sys

def num_to_words(x: int):
    digits = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
    tys = ["", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
    if  x < 20:
        return digits[x]
    if x < 100:
        return tys[x // 10] + (('-' + digits[x % 10]) if x % 10 else '')
    if x < 1000:
        return digits[x // 100] + " hundred" + (' ' + num_to_words(x % 100)) if x % 100 else ''

def main():
    n = int(sys.stdin.buffer.readline())
    if not n:
        sys.stdout.buffer.write("zero".encode())
    if n < 0:
        sys.stdout.buffer.write("minus".encode())
        n = -n
    if n >= 1000000000:
        sys.stdout.buffer.write((num_to_words(n // 1000000000) + " billion").encode())
        n %= 1000000000
        if n:
            sys.stdout.buffer.write(' '.encode())
    if n >= 1000000:
        sys.stdout.buffer.write((num_to_words(n // 1000000) + " million").encode())
        n %= 1000000
        if n:
            sys.stdout.buffer.write(' '.encode())
    if n >= 1000:
        sys.stdout.buffer.write((num_to_words(n // 1000) + " thousand").encode())
        n %= 1000
        if n:
            sys.stdout.buffer.write(' '.encode())
    sys.stdout.buffer.write(num_to_words(n).encode())

if __name__ == "__main__":
    main()