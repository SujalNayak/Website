#include <stdio.h>

int main()
{
    int *p, i, x = 3;

    //
    p = (int *)malloc(sizeof(int) * x);
    // p = (int*)calloc(5,sizeof(int));

    for (i = 0; i < x; i++)
    {
        printf("\nEnter number");
        // scanf("%d",&p[i]);
         scanf("%d", p + i);
    }

    for (i = 0; i < x; i++)
    {
        // printf("\n%d",p[i]);
        printf("\n%d", *(p + i));
    }

    free(p);

    return 0;
}