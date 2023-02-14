/*
Write a Program that adds two numbers using their pointers
*/
/*
#include<stdio.h>

int main()
{
    float a, b, c;
    float *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;
    printf("Enter a & b:\n");
    scanf("%f%f", pa, pb);      // a = 15, b = 10
    *pc = *pa + *pb;
    printf("ans = %0.2f", *pc);
    return 0;
}
*/

/*
Pointer Arithmetic
*/
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, *pa, *pb;
    char c, *pc;
    double d, *pd;
    pb = &b;
    pc = &c;
    clrscr();
    printf("pb = %p\n", pb);
    pb = pb + 1;
    printf("pb = %p\n", pb);
    printf("pc = %p\n", pc);
    pc++;
    printf("pc = %p\n", pc);
    pd = &d;
    printf("pd = %p\n", pd);
    pd++;
    printf("pd = %p\n", pd);
    getch();
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a1[10], i, *pa1;
    pa1 = &a1[0];
    printf("Enter 10 integers:\n");
    for (i=0; i<10; i++)
    {
        scanf("%d", pa1);
        pa1++;
    }
    pa1 = &a1[0];
    printf("Your array is: [");
    for (i=0; i<9; i++)
    {
        printf("%d  ", *pa1);
        pa1++;
    }
    printf("%d]", *pa1);
    return 0;
}
*/

#include<stdio.h>
#define SIZE 9
int main()
{
    int a[SIZE], *pStart, *pEnd, i, temp;
    pStart = &a[0];
    pEnd = &a[SIZE - 1];
    printf("Enter %d integers:\n", SIZE);
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", pStart);
        pStart++;
    }
    pStart = &a[0];
    for(i = 0; )
    {
        temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }
    pStart = &a[0];
    printf("Reversed array is: [");
    for (i=0; i<SIZE-1; i++)
    {
        printf("%d  ", *pStart);
        pStart++;
    }
    printf("%d]", *pStart);
    return 0;
}

// Call by reference: write a C program that adds two integers using call by reference
/*
#include<stdio.h>
void add(int *p1, int *p2, int *pAns)
{
    *pAns = *p1 + *p2;
}

int main()
{
    int a, b, c;
    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);
    add(&a, &b, &c);
    printf("%d + %d = %d", a, b, c);
    return 0;
}
*/
// Write a C program that asks two 3 x 3 matrix from user, print them, add them and print the final matrix. Use Pointers.
// #include<stdio.h>
// #define RANK 3
// void scanMatrix(float *pDest){
//     int i, j;
//     for(i=0; i<RANK; i++)
//     {
//         printf("Row-%d:\n", i);
//         for(j=0; j<RANK; j++)
//         {
//             scanf("%f", pDest);
//             pDest++;
//         }
//     }
// }
// void printMatrix(float *pSource){
//     int i, j;
//     for(i=0; i<RANK; i++)
//     {
//         for(j=0; j<RANK; j++)
//         {
//             printf("%0.3f\t", *pSource);
//             pSource++;
//         }
//         printf("\n");
//     }
// }

// int main(){
//     float m1[RANK][RANK], m2[RANK][RANK], m3[RANK][RANK];
//     int i, j;
//     printf("Enter first matrix:\n");
//     scanMatrix(&m1[0][0]);
//     printf("First Matrix is:\n");
//     printMatrix(&m1[0][0]);
//     printf("Enter Second matrix:\n");
//     scanMatrix(&m2[0][0]);
//     printf("Second Matrix is:\n");
//     printMatrix(&m2[0][0]);
//     for(i=0; i<RANK; i++)
//     {
//         for(j=0; j<RANK; j++)
//         {
//             m3[i][j] = m1[i][j] + m2[i][j];
//         }
//     }
//     printf("Resultant Matrix:\n");
//     printMatrix(&m3[0][0]);
//     return 0;
// }