#include <stdio.h>
struct node
{
    int data;
    struct node *next; // self ref. structurt
} *head = NULL;

int main()
{
    int ch, num;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    while (1)
    {
        printf("\n0 for exit\n1  for insert\n2 for display\n3 for delete ");
        printf("\n4 for insertAtBeg\n5 for insertAtAnyAfter");
        printf("\n6 for insertATAnyBefore\n7 for deleteBeg\n8 for Delete Any");
        printf("\nEnter choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num); // 10 20 30 40
            insert(num);
            break; // insert at last
        case 2:
            display();
            break; // beg to end display
        case 3:
            deleteNode();
            break; // delete last
        case 4:
            insertAtBeg();
            break; // insert at beg
        case 5:
            insertAtAnyAfter();
            break; // insert at any after
        case 6:
            insertAtAnyBefore();
            break; // insert at any before
        case 7:
            deleteNodeBeg();
            break;
        case 8:
            deleteAny();
            break;
        }
    }
}

void insert(int num)
{

    struct node *tmp, *p;

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
    int search, isFound = 0, num; // 0 not
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

void insertAtAnyBefore()
{
    int search, num, isFound = 0;
    struct node *p, *q, *tmp;

    if (head == NULL)
    {
        printf("\nEnter Few DAta");
    }
    else
    {
        printf("\nEnter Source Node : before ");
        scanf("%d", &search);

        p = head;
        q = head;
        while (p != NULL)
        {
            if (p->data == search)
            {
                isFound = 1;
                break;
            }
            q = p;
            p = p->next;
        }

        if (isFound)
        {
            printf("\nEnter new data");
            scanf("%d", &num);

            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->data = num;

            tmp->next = p;
            q->next = tmp;
        }
        else
        {
            printf("\nInvalid Source Data PTA");
        }
    }
}

void deleteNodeBeg()
{

    struct node *p;
    p = head;
    head = head->next;
    free(p);
}

void deleteAny()
{

    struct node *p, *q;
    int num, isFound = 0;

    printf("\nEnter num to delete");
    scanf("%d", &num);
    p = head;
    q = head;
    while (p != NULL)
    {
        if (p->data == num)
        {
            isFound = 1;
            break;
        }
        q = p;
        p = p->next;
    }

    if (isFound)
    {
        if (p == head)
        {
            deleteNodeBeg();
        }
        else if (p->next == NULL)
        {
            deleteNode();
        }
        else
        {
            q->next = p->next;
            free(p);
        }
    }
    else
    {
        printf("\nInvalid Source PTA");
    }
}
