#include <stdio.h>
int recursive_series(int a, int d, int n)
{
    if (n == 1)
    {
        return a;
    }
    else
    {
        return d + recursive_series(a, d, n - 1);
    }
}

int main()
{
    int a, d, n, ans;
    printf("\nEnter first term");
    scanf("%d", &a);
    printf("\nEnter difference");
    scanf("%d", &d);
    printf("\nEnter term you want");
    scanf("%d", &n);
    ans = recursive_series(a, d, n);
    printf("\n\nYour term is %d", ans);
    return 0;
}