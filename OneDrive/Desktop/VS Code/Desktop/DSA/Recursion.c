#include <stdio.h>

int main()
{
    int a, ans;
    printf("\nEnter the number : ");
    scanf("%d", &a);
    ans = recursion(a);
    printf("1");
    printf(" = %d", ans);
    return 0;
}

int recursion(int n)
{
    if (n > 1)
    {
        printf("%d x ", n);
    }
    if (n > 0)
    {

        return n * recursion(n - 1);
    }
    else
    {
        return 1;
    }
}