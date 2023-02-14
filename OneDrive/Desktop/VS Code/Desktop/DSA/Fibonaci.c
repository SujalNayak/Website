#include <stdio.h>

int fibo(int a, int b, int c)
{
    if (c == 1)
    {
        return a;
    }

    printf("%d  ", a);
    fibo(b, a + b, --c);
}

int main()
{
    int a, b, c;
    printf("\nEnter first term : ");
    scanf("%d", &a);
    printf("\nEnter second term : ");
    scanf("%d", &b);
    printf("\nEnter the total number of term you want : ");
    scanf("%d", &c);
    printf("\n\nFibonacci Series : ");
    printf("%d", fibo(a, b, c));
    return 0;
}
