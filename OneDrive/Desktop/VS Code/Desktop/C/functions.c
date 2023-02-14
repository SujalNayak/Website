#include <stdio.h>

/*int factorial(int n)
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
    // printf("%d factorial is %d\n", n, f);
}
int main()
{
    int a, b, c, d, e, total = 0;
    printf("Enter 5 integer to find factorial :");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    total = factorial(a) + factorial(b) + factorial(c) + factorial(d) + factorial(e);
    printf("Total = %d", total);
    return 0;
}*/

/*Write a C function that takes radius of a circle as an arguement and returns the area of that circle
A programmer visits a pizza shop and pays for one 8 inch pizza. The shopkeeper didn't have any 8-inch pizza base.
So they gave 2 pizzas of 4-inch pizza base to the programmer
Write C main program thatr checks whether the programmer was justified or cheated by the shopkeeper */

/*int area(int n)
{
    float area;
    area = 3.14 * n * n;
    return area;
}

int cheat(float x)
{
    float area2;
    x = x / 2;
    area2 = 3.14 * x * x;
    area2 = area2 * 2;
    return area2;
}
int main()
{
    int r;
    float ans, ans2, comp = 0;
    printf("Enter the Pizza size you want (Radius of Circle) : ");
    scanf("%d", &r);
    ans = area(r);
    printf("\nArea of 8-inch pizza = %0.2f", ans);
    ans2 = cheat(r);
    printf("\nArea of two 4-inch pizza = %0.2f", ans2);
    comp = area(r) - cheat(r);
    if (comp == 0)
    {
        printf("\nProgrammer JUSTIFIED...");
    }
    else
    {
        printf("\nProgrammer CHEATED...");
    }
    return 0;
}*/

/*
Write a C function that takes an integer in its arguement and print all its factors.
Write a main programme that asks user to enter integer and prints them along with thier functions in form of table.

Example:
No.     Factors
6       1, 2, 3, 6
15      1, 3, 5, 15
18      1, 2, 3, 6, 9, 18


int factor(int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d", n);
}
int main()
{
    int a, b, c, d, e;
    printf("Enter 5 integers : \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    printf("\n\nNo.\tFactors\n\n");

    printf("%d\t", a);
    factor(a);
    printf("\n");
    printf("%d\t", b);
    factor(b);
    printf("\n");
    printf("%d\t", c);
    factor(c);
    printf("\n");
    printf("%d\t", d);
    factor(d);
    printf("\n");
    printf("%d\t", e);
    factor(e);
    return 0;
}*/

/*
Write a c function that determines whether the no. given in its prime or not.
In the main program, ask two no.s from user and print numbers between them.
*/
/*
int prime(int x1)
{
    for (int j = 2; j <= x1; j++)
    {
        if (x1 % j == 0)
        {
            return j;
        }
        if (x1 % j != 0)
        {
            return j;
        }
    }
}

int main()
{
    int n1;
    printf("Enter two number: ");
    scanf("%d", &n1);
    // scanf("%d", &n2);
    // int ans = prime(n1,n2);
    // printf("\n\nPrime no. between %d and %d is\n\n", n1, n2);
    int ans = prime(n1);
    printf("Number is PRIME !!!", ans);
    return 0;
}*/

/*1. Write a C function to find factorial of a number given in its argument.
Develop a main program that takes five integers from user and print sum of their
factorials using that function.*/

// int factorial(int n)
// {
//     int f = 1, i;
//     for (i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     return f;
//     // printf("%d factorial is %d\n", n, f);
// }
// int main()
// {
//     int a, b, c, d, e,_a, _b, _c, _d, _e, total = 0;
//     printf("Enter 5 integer to find factorial :");
//     scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//     _a = factorial(a);
//     _b = factorial(b);
//     _c = factorial(c);
//     _d = factorial(d);
//     _e = factorial(e);
//     printf("\n%d! = %d", a, _a);
//     printf("\n%d! = %d", b, _b);
//     printf("\n%d! = %d", c, _c);
//     printf("\n%d! = %d", d, _d);
//     printf("\n%d! = %d", e, _e);
//     total = _a + _b + _c + _d + _e;
//     printf("\n\nTotal = %d", total);
//     return 0;
// }

/*2. Make a C program that uses a function to find average of 5 given numbers and write C main program that
takes 5 integers from user, uses the factorial function that you have already written in ex-1 to find factorial
of each one of them and using average function prints the average of factorials of them.*/
/*
int factorial(int n)
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
    // printf("%d factorial is %d\n", n, f);
}

int average(int a, int b, int c, int d, int e)
{
    int total, ave;
    total = a + b + c + d + e;
    ave = total / 5;
    return ave;
}

int main()
{
    int a, b, c, d, e, _a, _b, _c, _d, _e, ans;
    printf("Enter 5 integers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    _a = factorial(a);
    _b = factorial(b);
    _c = factorial(c);
    _d = factorial(d);
    _e = factorial(e);
    printf("\n%d! = %d", a, _a);
    printf("\n%d! = %d", b, _b);
    printf("\n%d! = %d", c, _c);
    printf("\n%d! = %d", d, _d);
    printf("\n%d! = %d", e, _e);
    ans = average(_a, _b, _c, _d, _e);
    printf("\n\nAverage = %d", ans);
    return 0;
}*/

/*3. Make a function that checks whether the given number is a perfect number or not.
Make a C program that uses this function to print all the perfect numbers between a given range.
A perfect number is one whose all factors (excluding itself), when added up, you get the number itself.
 eg, factors of 6: 1, 2, 3, 6 & 1+2+3 = 6. so 6 is a perfect number.*/


// int perfect(int n)
// {
//     int i, sum = 0;
//     for (i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("\n%d", i);
//             sum = sum + i;
//         }
//     }
//     return sum;
// }
// int main()
// {
//     int n, m, i, sum1;
//     printf("Enter a Number :");
//     scanf("%d", &n);
//     sum1 = perfect(n);

//     if (sum1 == n)
//     {
//         printf("\n%d is a perfect number", n);
//     }
//     else
//     {
//         printf("\n%d is not a perfect number", n);
//     }
//     return 0;
// }

/*4. Write a C function that determines whether the number given in its argument is Armstrong number or not.
 Build a main program that takes two integers from user and print all the Armstrong numbers between those
 two integers using that function.*/
