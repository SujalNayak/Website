#include <stdio.h>
struct node
{
    int data;
    struct node *next; /* self ref. structurt*/
} *head = NULL;
int main()
{
    int ch;
    while (1)
    {
        printf("\n0 for exit\n1  for insert\n2 for display\n3 for delete ");
        printf("\n4 for insertAtBeg\n5 for insertAtAnyAfter\n");
        printf("\nEnter choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            insertAtBeg();
            break;
        case 5:
            insertAtAnyAfter();
            break;
        }
    }
}
void insert()
{
    int num;
    struct node *tmp, *p;
    printf("\nEnter number");
    scanf("%d", &num); /* 10 20 30 40*/
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
    }
    else
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
    }
}
void display()
{
    struct node *p;
    if (head == NULL)
    {
        printf("\nNo Element");
    }
    else
    {
        p = head;
        while (p != NULL)
        {
            printf("%d->", p->data);
            p = p->next;
        }
    }
}
void deleteNode()
{
    struct node *p, *q;
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        free(p);
    }
}
void insertAtBeg()
{
    struct node *tmp;
    int num;
    if (head == NULL)
    {
        printf("\nPlease create list");
    }
    else
    {
        printf("\nEnter number");
        scanf("%d", &num);
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}
void insertAtAnyAfter()
{
    int search, isFound = 0, num; /* 0 not*/
    struct node *p, *q, *tmp;
    printf("\nEnter number after you want to add new data");
    scanf("%d", &search);
    p = head;
    while (p != NULL)
    {
        if (p->data == search)
        {
            isFound = 1;
            break;
        }
        p = p->next;
    }
    if (isFound == 1)
    {
        printf("\nEnter new number");
        scanf("%d", &num);
        q = p->next;
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = q;
        p->next = tmp;
    }
    else
    {
        printf("\n%d not present in the list PTA", search);
    }
}