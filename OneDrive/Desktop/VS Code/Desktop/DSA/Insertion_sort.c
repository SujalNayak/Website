#include <stdio.h>
// #define N 5

int main()
{
    int sort, i, j, n, x;
    int a[10];

    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("\nEnter elements of an array\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
    printf("\nArray Before Sorting\n");
    for (x = 0; x < n; x++)
        printf("%d\t", a[x]);

    // sort
    for (i = 1; i < n; i++)
    {
        sort = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > sort)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j + 1] = sort;
    }

    printf("\nArray After Sorting\n");
    for (x = 0; x < n; x++)
        printf("%d\t", a[x]);

    return 0;
}