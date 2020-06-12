#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
const int M = 1e9 + 7;
uint64_t mulmod(uint64_t x, uint64_t n)
{
    uint64_t y = 0;
    while (x)
    {
        if (x & 1)
            y = (y + n) % M;
        x >>= 1;
        n = (n << 1) % M;
    }
    return y;
}
uint64_t binexp(uint64_t x, uint64_t n)
{
    uint64_t y = 1;
    while (n)
    {
        if (n & 1)
            y = mulmod(y, x); // equal to y = (y * x) % M
        x = mulmod(x, x);     // similarly
        n >>= 1;
    }
    return y;
}
int main()
{
    uint64_t r, t;
    scanf("%" SCNu64 "%" SCNu64, &r, &t);
    printf("%" PRIu64 "\n", binexp(r, t));
    return 0;
}