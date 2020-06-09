#include <stdio.h>
#include <stdint.h>   // uint64_t
#include <inttypes.h> // SCNu64
int main()
{
    uint64_t n, a, b;                                    // unsigned long long is far less portable.
    scanf("%" SCNu64 "%" SCNu64 "%" SCNu64, &n, &a, &b); // you may use %l64u or %llu on different os, so it's better to use macro.
    puts(a << 2 >= n && a > b ? "!!666" : "QQ~~");
    printf("%" PRIu64, n - a - b);
    return 0;
}