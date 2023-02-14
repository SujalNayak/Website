#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int num;

    if (top == SIZE - 1)
        printf("\nStackOverFlow");
    else
    {
        printf("\nEnter number");
        scanf("%d", &num);
        top++;
        stack[top] = num;
    }
}
void pop()
{
    int num;
    if (top == -1)
        printf("\nStackUnderFlow");
    else
    {
        num = stack[top];
        printf("\n%d pop", num);
        top--;
    }
}
void display()
{
    int i;

    if (top == -1)
        printf("\nStackUnderFlow");
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]); //
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n0 For Exit\n1 For Push\n2 For pop\n3 For Display");
        printf("\nEnter Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("\nInvalid Choice PTA");
        }
    }

    return 0;
}