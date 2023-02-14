#include <stdio.h>

int main()
{
    int a[100], n, choice;
    printf("\nEnter the length of array\n");
    scanf("%d", &n);
    printf("\n\nEnter the elements of array\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\nARRAY BEFORE SORTING\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\nEnter the operation do you want to do\n");
    printf("\nEnter 1 for Sort Ascending\n");
    printf("\nEnter 2 for Sort Descending\n");
    printf("\nEnter 3 for EXIT!!!\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        ascending(a, n);
        break;
    case 2:
        descending(a, n);
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("\nINVALID OPERATION\tPLEASE TRY AGAIN!!!");
    }
    return 0;
}

int ascending(int a[100], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    printf("\n\nARRAY AFTER SORTING : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");
}
int descending(int a[100], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    printf("\n\nARRAY AFTER SORTING : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");
}