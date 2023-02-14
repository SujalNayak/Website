#include <stdio.h>
// int main()
// {
//     int a[5], i;
//     printf("Enter Number :");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     /*for(i=0;i<5;i++)
//     {
//         printf("%d\t",a[i]);
//     }*/
//     for (i = 0; i < 5; i++)
//     {
//         if (a[i] > 0)
//         {
//             printf("%d\t", a[i]);
//         }
//     }
//     for (i = 0; i < 5; i++)
//     {
//         if (a[i] < 0)
//         {
//             printf("%d\t", a[i]);
//         }
//     }
//     return 0;
//
int main()
{
    int a[5], shift;
    int tmp = 0;
    printf("Enter numbers\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("\na[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nARRAY BEFORE SHIFT\n");
    printf("\nEnter how many times you want to do right shift\n\n");
    scanf("%d", &shift);
    //  rightshift(a, shift);
    for (int j = 0; j < shift; j++)
    {
        tmp = a[4];
        for (int i = 1; i <= 4; i++)
        {
            a[5 - i] = a[4 - i];
        }
        a[0] = tmp;
    }
    printf("\nARRAY AFTER SHIFT\n");

    for (int i = 0; i <= 4; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}

// int rightshift(int a[4], int shift)
// {
// }