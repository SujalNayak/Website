#include <stdio.h>
int main()
{
    int a = 10, b, c, *x, *y, *z;
    printf("\nAddress of a = %p", &a);
    printf("\nAddress of b = %p", &b);
    printf("\nAddress of c = %p", &c);
    x = &a;
    y = &b;
    z = &c;
    printf("\nAddress of a = %p", x);
    printf("\nAddress of b = %p", y);
    printf("\nAddress of c = %p", z);
    return 0;
}