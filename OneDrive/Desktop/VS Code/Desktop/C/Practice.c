#include <stdio.h>
#include <stdlib.h>
// #include <stdio.h>

// void odd(int r[], int d[], int g)
// {
//     for (int i = 0;'2g-1' == 0; i++)
//     {
//         printf("\n%d + %d = %d", r[i], d[i], r[i] + d[i]);
//     }
// }

// int main()
// {
//     int a[100], b[100], n, ans[100];
//     printf("Enter Length of arrays: ");
//     scanf("%d", &n);
//     if (('2n - 1') == 0)
//     {
//         odd();
//     }
//         for (int i = 0; i < n; i++)
//         {
//             printf("\nEnter value of a[%d]: ", i);
//             scanf("%d", &a[i]);
//         }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter value of b[%d]: ", i);
//         scanf("%d", &b[i]);
//     }
//     add(a, b, n);
//     return 0;
// }

// int main()
// {
//     int a[5];
//     printf("Enter no.: ");
//     for (int i = 1; i <= 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("%d\n", a[2 * i - 1]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int sort(int n[10])
// {
//     int i,j,temp;
//     for(i=0;i<10;i++)
//     {
//         for(j=0;j<9-i;j++)
//         {
//             if(n[j]>n[j+1])
//             {
//                 temp=n[j];
//                 n[j]=n[j+1];
//                 n[j+1]=temp;
//             }
//         }
//     }
//     return n;
// }
// int main()
// {
//     int a[10],i;
//     printf("Enter 10 Elements :");
//     for(i=0;i<10;i++)
//     {
//         printf("Enter a[%d]",i+1);
//         scanf("%d",&a[i]);
//     }
//     int*ans=sort(a);
//     for(i=0;i<10;i++)
//     {
//         printf("%d",ans[i]);
//     }
//     return 0;
// }

// int addition(int r2, int c2, int a[10][10], int b[10][10])
// {
//     printf("\n\nAddition\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d\t", a[i][j] + b[i][j]);
//         }
//         printf("\n");
//     }
// }
// int subtraction(int r2, int c2, int a[10][10], int b[10][10])
// {
//     printf("\n\nSubtraction\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d\t", a[i][j] - b[i][j]);
//         }
//         printf("\n");
//     }
// }
// int division(int r2, int c2, int a[10][10], int b[10][10])
// {
//     printf("\n\nDivision\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d\t", a[i][j] / b[i][j]);
//         }
//         printf("\n");
//     }
// }
// int modulus(int r2, int c2, int a[10][10], int b[10][10])
// {
//     printf("\n\nModulus\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d\t", a[i][j] % b[i][j]);
//         }
//         printf("\n");
//     }
// }

// int multiplication(int r1, int r2, int c2, int a[10][10], int b[10][10])
// {
//     int k, i, j, pro[10][10];
//     printf("\n\nMultiplication\n");
//     for (i = 0; i < r1; i++)
//     {
//         for (j = 0; j < c2; j++)
//         {
//             pro[i][j] = 0;
//             for (k = 0; k < r2; k++)
//             {
//                 pro[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     for (i = 0; i < r1; i++)
//     {
//         for (j = 0; j < c2; j++)
//         {
//             printf("%d\t", pro[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int a[10][10], b[10][10], i, j, r1, c1, r2, c2;
//     printf("Enter rows and coloumns of first matrix\n");
//     scanf("%d%d", &r1, &c1);
//     printf("Enter rows and coloumns of second matrix\n");
//     scanf("%d%d", &r2, &c2);
//     if (r1 != r2 || c1 != c2)
//     {
//         exit(0);
//     }
//     printf("\nEnter elements\n");
//     for (i = 0; i < r1; i++)
//     {
//         for (j = 0; j < c1; j++)
//         {
//             printf("\nEnter the value of a[%d][%d]", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (i = 0; i < r2; i++)
//     {
//         for (j = 0; j < c2; j++)
//         {
//             printf("\nEnter the value of b[%d][%d]", i, j);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("\n\n");
//     for (i = 0; i < r1; i++)
//     {
//         for (j = 0; j < c1; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");
//     for (i = 0; i < r2; i++)
//     {
//         for (j = 0; j < c2; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     addition(r2, c2, a, b);
//     subtraction(r2, c2, a, b);
//     division(r2, c2, a, b);
//     modulus(r2, c2, a, b);
//     multiplication(r1, r2, c2, a, b);
//     return 0;
// }

// int main()
// {
//     int n
//     printf("Here is the series\n\n 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/n");
//     printf("Enter the total term you want");
//     scanf("%d", &n);
//     for (int i = 0; i < ; i++)
//     {
//         /* code */
//     }

// }

/*
make the switch case with following cases:

case 1 : 1-D Array
    case 1	 : Int
        case 1 : ask size and scan two arrays
        case 2 : print two arrays
        case 3 : add the elements of the array
        case 4 : find min max of the array of both array
    case 2 : Float
        case 1 : ask size and scan
        case 2 : print
        case 3 : add the elements of the array
        case 4 : find min max of the array
    case 3 : Char
        case 1 : ask size and scan
        case 2 : print
        case 3 : find and coount the number of vowels in the array
case 2 : 2-D Array
    case 1	 : Int
        case 1 : ask size and scan
        case 2 : print
        case 3 : add the elements of the array
        case 4 : find min max of the array
    case 2 : Float
        case 1 : ask size and scan
        case 2 : print
        case 3 : add the elements of the array
        case 4 : find min max of the array
    case 3 : Char
        case 1 : ask size and scan
        case 2 : print
        case 3 : find and coount the number of vowels in the array
*/

// int main()
// {
//     int choice,choice1,choice2;
//     printf("Enter 1 for 1-D array\n");
//     printf("Enter 2 for 2-D array\n");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//     {
//         printf("Enter 1 for Integer array\n");
//         printf("Enter 2 for Float array\n");
//         printf("Enter 3 for Character array\n");
//         scanf("%d", &choice1);
//         switch (choice1)
//         {
//         case 1:
//         {
//             int n1, n2, a[10], b[10];
//             printf("\nEnter the size of the first array\n");
//             scanf("%d", &n1);
//             printf("\nEnter the size of the second array\n");
//             scanf("%d", &n2);
//             integer1(n1, n2, a, b);
//         }
//         break;
//         case 2:
//         {
//             int n1, n2;
//             float a[10], b[10];
//             printf("\nEnter the size of the first array\n");
//             scanf("%d", &n1);
//             printf("\nEnter the size of the second array\n");
//             scanf("%d", &n2);
//             float1(n1, n2, a, b);
//         }
//         break;
//         case 3:
//         {
//             int n1, n2;
//             char a[10][10], b[10][10];
//             printf("\nEnter the size of the first array\n");
//             scanf("%d", &n1);
//             printf("\nEnter the size of the second array\n");
//             scanf("%d", &n2);
//             // char1(n1, n2, a, b);
//         }
//         break;

//         default:
//         {
//             printf("Invalid Input\nPlease TRY AGAIN!!!");
//         }
//         break;
//         }
//     }
//     case 2:
//     {
//         printf("Enter 1 for Integer array\n");
//         printf("Enter 2 for Float array\n");
//         printf("Enter 3 for Character array\n");
//         scanf("%d", &choice2);
//         switch (choice2)
//         {
//         case 1:
//         {
//             int r1, r2, c1, c2, a[10][10], b[10][10];
//             printf("\nEnter rows and columns of first array\n");
//             scanf("%d%d", &r1, &c1);
//             printf("\nEnter rows and columns of second array\n");
//             scanf("%d%d", &r2, &c2);
//             integer2(r1, r2, c1, c2, a, b);
//         }
//         break;
//         case 2:
//         {
//             int r1, r2, c1, c2;
//             float a[10][10], b[10][10];
//             printf("\nEnter rows and columns of first array\n");
//             scanf("%d%d", &r1, &c1);
//             printf("\nEnter rows and columns of second array\n");
//             scanf("%d%d", &r2, &c2);
//             float2(r1, r2, c1, c2, a, b);
//         }
//         }
//     }
//     }
//     return 0;
// }
// int integer2(int r1, int r2, int c1, int c2, int a[10][10], int b[10][10])
// {
//     printf("\nEnter the elements of first\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             printf("\na[%d][%d] = ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("\nEnter the elements of second\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("\nb[%d][%d] = ", i, j);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("\n\nFirst Array\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; i++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n\nSecond Array\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; i++)
//         {
//             printf("%d\t", b[i][j]);
//         }
//         printf("\n");
//     }
//     if (r1 == r2 && c1 == c2)
//     {
//         printf("\n\nAddition\n");
//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 printf("%d\t", a[i][j] + b[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("\n\nRows or coloumns are not matched.\nSo, Addition is no possible!!!");
//     }
// }
// int float2(int r1, int r2, int c1, int c2, float a[10][10], float b[10][10])
// {
//     printf("\nEnter the elements of first\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             printf("\na[%d][%d] = ", i, j);
//             scanf("%f", &a[i][j]);
//         }
//     }
//     printf("\nEnter the elements of second\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("\nb[%d][%d] = ", i, j);
//             scanf("%f", &b[i][j]);
//         }
//     }
//     printf("\n\nFirst Array\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; i++)
//         {
//             printf("%0.2f\t", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n\nSecond Array\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; i++)
//         {
//             printf("%0.2f\t", b[i][j]);
//         }
//         printf("\n");
//     }
//     if (r1 == r2 && c1 == c2)
//     {
//         printf("\n\nAddition\n");
//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 printf("%0.2f\t", a[i][j] + b[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("\n\nRows or coloumns are not matched.\nSo, Addition is no possible!!!");
//     }
// }
// int integer1(int n1, int n2, int a[10], int b[10])
// {
//     printf("\nEnter the elements of first\n");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("\na[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     printf("\nEnter the elements of second\n");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("\nb[%d] = ", i);
//         scanf("%d", &b[i]);
//     }
//     printf("\n\nFirst array is \n");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("%d\t", a[i]);
//     }
//     printf("\n\nSecond array is \n");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("%d\t", b[i]);
//     }
//     printf("\n\nAddition :-");
//     if (n1 == n2)
//     {
//         for (int i = 0; i < n1; i++)
//         {
//             printf("\n%d + %d = %d\n", a[i], b[i], a[i] + b[i]);
//         }
//     }
//     else
//     {
//         printf("\n\nHere size of both array is not same\nSo, the addition of both array is not possible!!!");
//     }
// }
// int float1(int n1, int n2, float a[10], float b[10])
// {
//     printf("\nEnter the elements of first\n");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("\na[%d] = ", i);
//         scanf("%f", &a[i]);
//     }
//     printf("\nEnter the elements of second\n");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("\nb[%d] = ", i);
//         scanf("%f", &b[i]);
//     }
//     printf("\n\nFirst array is \n");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("%0.2f\t", a[i]);
//     }
//     printf("\n\nSecond array is \n");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("%0.2f\t", b[i]);
//     }
//     printf("\n\nAddition :-");
//     if (n1 == n2)
//     {
//         for (int i = 0; i < n1; i++)
//         {
//             printf("\n%d + %d = %d\n", a[i], b[i], a[i] + b[i]);
//         }
//     }
//     else
//     {
//         printf("\n\nHere size of both array is not same\nSo, the addition of both array is not possible!!!");
//     }
// }
// int char1(int n1, int n2, char a[10][10], char b[10][10])
// {
//     printf("\nEnter the elements of first\n");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("\na[%d] = ", i);
//         scanf("%c", &a[i][10]);
//     }
//     printf("\nEnter the elements of second\n");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("\nb[%d] = ", i);
//         scanf("%c", &b[i][10]);
//     }
//     printf("\n\nFirst array is \n");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("%c\t", a[i][10]);
//     }
//     printf("\n\nSecond array is \n");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("%c\t", b[i][10]);
//     }

// }

int main()
{
    int a, b, *pa,*pb;
    printf("Enter two numbers:-\n");
    scanf("%d%d", a, b);
    pa = &a;
    pb = &b;
    *pa = *pa + *pb;
    *pb = *pa - *pb;
    // pa = &a;
    *pa = *pb - *pa;
    printf("First number is:- %d", *pa);
    printf("\nSecond number is:- %d", *pb);
}
