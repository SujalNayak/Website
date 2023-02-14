#include <stdio.h>
#define SIZE 2
struct student
{
        int roll_no, che, phy, maths;
        float per;
        char name[30];
} s[SIZE];

int main()
{
        int i;
        for (i = 1; i < SIZE; i++)
        {
                printf("\nEnter name of student %d\n", i);
                fflush(stdin);
                gets(s[i].name);
                printf("\nEnter roll no. of %s\n", s[i].name);
                scanf("%d", &s[i].roll_no);
                printf("\nEnter chemistry marks of %s\n", s[i].name);
                scanf("%d", &s[i].che);
                printf("\nEnter physics marks of %s\n", s[i].name);
                scanf("%d", &s[i].phy);
                printf("\nEnter mathematics marks of %s\n", s[i].name);
                scanf("%d", &s[i].maths);
                s[i].per = (s[i].che + s[i].phy + s[i].maths) / 3;
                printf("\nPercentage of %s is %0.2f\n", s[i].name, s[i].per);
        }

        printf("\n\nRoll no.\tName\tChemistry\tPhysics\tMathematics\tPercentage");
        for (i = 1; i < SIZE; i++)
        {
                printf("\n%d\t\t%s\t%d\t%d\t%d\t%0.2f", s[i].roll_no, s[i].name, s[i].che, s[i].phy, s[i].maths, s[i].per);
        }

        return 0;
}