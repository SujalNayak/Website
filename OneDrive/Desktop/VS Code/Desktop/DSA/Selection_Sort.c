#include <stdio.h>

int main()
{
    int i, j, min, tmp, n, flag = 1, a[] = {5, 9, 2, 4, 6, 3, 1, 7};

    printf("\nArray Before Sorting...\n");
    for (int x = 0; x < n; x++)
    {
        printf("  %d", a[x]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nPass-%d\n", i + 1);
        min = i;
        for (j = i + 1; j < n; j++)
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
    return 0;
}
