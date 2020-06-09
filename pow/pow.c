#include <stdio.h>
const int M = 1e9 + 7;
int mulmod(int x, int n)
{
    int y = 0;
    while (x)
    {
        if (x & 1)
            y = (y + n) % M;
        x >>= 1;
        n = (n << 1) % M;
    }
    return y;
}
int binexp(int x, int n)
{
    int y = 1;
    while (n)
    {
        if (n & 1)
            y = mulmod(y, x); // (y * x) may overflow (if x, y are not long)
        x = mulmod(x, x);     // similarly
        n >>= 1;
    }
    return y;
}
int main()
{
    int r, t;
    scanf("%d%d", &r, &t);
    printf("%d\n", binexp(r, t));
    return 0;
}