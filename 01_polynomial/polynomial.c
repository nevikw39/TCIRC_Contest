#include <stdio.h>
int inline myabs(int x) // absolute value function based on bitwise operation, which is a little bit efficient
{
    return (x ^ (x >> 31)) - (x >> 31);
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a)
    {
        if (a < 0)
            putchar_unlocked('-');
        if (myabs(a) > 1)
            printf("%d", myabs(a));
        printf("x^2");
        if (b)
        {
            printf(b > 0 ? " + " : " - ");
            if (myabs(b) > 1)
                printf("%d", myabs(b));
            putchar_unlocked('x');
        }
        if (c)
            printf(c > 0 ? " + %d" : " - %d", myabs(c));
    }
    else if (b)
    {
        if (b < 0)
            putchar_unlocked('-');
        if (myabs(b) > 1)
            printf("%d", myabs(b));
        putchar_unlocked('x');
        if (c)
            printf(c > 0 ? " + %d" : " - %d", myabs(c));
    }
    else
        printf("%d", c);
    return 0;
}