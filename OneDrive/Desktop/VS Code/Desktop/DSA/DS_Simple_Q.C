#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int q[SIZE];
int f = -1, r = -1;
int num;
void insert();
void display();
void deleteQ();
void search();

void search()
{
    int i, min = 0, max = SIZE - 1, mid, search, found = 0;
    while (1)
    {
        found = 0;
        min = 0;
        max = SIZE - 1;
        printf("\nEnter number SEARCH : (-1) for Exit ");
        scanf("%d", &q[search]);
        if (search == -1)
            break;

        while (min <= max)
        {
            mid = (min + max) / 2;
            if (q[mid] == q[search])
            {
                found = 1;
                printf("%d found!!!\nPosition is %d", q[search], mid + 1);
                break;
            }
            else if (q[mid] > q[search])
            {
                max = mid - 1;
            }
            else
            {
                min = mid + 1;
            }
        }

        if (!found)
            printf("%d noT FOUND", q[search]);
    }
}
void insert()
{
    int num;
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQ is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQ is Full");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            printf("\nEnter number");
            scanf("%d", &num);
        }
        if (f == -1)
        {
            f++;
        }

        if (r == SIZE - 1)
        {
            r = 0;
        }
        else
        {
            r++;
        }

        q[r] = num;
    }
}

void display()
{

    int i;
    if (f == -1)
    {
        printf("\nQ empty");
    }
    else if (f <= r)
    {
        printf("\nContent of The Q \n");
        for (i = f; i <= r; i++)
        {
            printf("  %d", q[i]);
        }
    }
    else
    {
        printf("\nContent of The Q \n");
        for (i = f; i < SIZE; i++)
        {
            printf("  %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf("  %d", q[i]);
        }
    }
}
void deleteQ()
{
    int num;
    if (f == -1)
    {
        printf("\nQ is Empty");
    }
    else
    {

        num = q[f];
        printf("\n%d deleted!!!", num);

        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (f == SIZE - 1)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}

int main()
{

    int choice;

    while (1)
    {
        printf("\n0 for exit\n1 for insert\n2 for delete\n3 for display\n4 for search\n\nenter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            insert();
            break;
        case 2:
            deleteQ();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        }
    }

    return 0;
}