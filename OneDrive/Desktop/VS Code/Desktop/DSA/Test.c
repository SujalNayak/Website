#include <stdio.h>
#define SIZE 5
int main()
{
    int i, j, min, tmp, n, a[SIZE];
    printf("Enter %d elements", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\nArray Before Sorting\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d  ", a[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (i != min)
        {
            tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }
    }
    printf("\n\nArray After Sorting\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}