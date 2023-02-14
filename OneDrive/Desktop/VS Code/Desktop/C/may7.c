/*
Classwork:
1. Write a C function that determines whether the number given in its argument is prime or not. In the main program, ask two numbers from user and print all the prime numbers between them.

Function Homework Examples:
1. Write a C function to find factorial of a number given in its argument. Develop a main program that takes five integers from user and print sum of their factorials using that function.

2. Make a C program that uses a function to find average of 5 given numbers and write C main program that takes 5 integers from user, uses the factorial function that you have already written in ex-1 to find factorial of each one of them and using average function prints the average of factorials of them.

3. Make a function that checks whether the given number is a perfect number or not. Make a C program that uses this function to print all the perfect numbers between a given range. A perfect number is one whose all factors (excluding itself), when added up, you get the number itself. eg, factors of 6: 1, 2, 3, 6 & 1+2+3 = 6. so 6 is a perfect number.

4. Write a C function that determines whether the number given in its argument is Armstrong number or not. Build a main program that takes two integers from user and print all the Armstrong numbers between those two integers using that function.
*/

#include <stdio.h>
int primeCheck(int n) // n = 35
{
    int i;
    // int flag = 1;
    if (n == 1)
    {
        return 0;
    }
    for (i = 2; i < n; i++) // i = 2, 3, 4, 5, 6......, 34
    {
        if (!(n % i)) // 35 % 2 = 1, 35 % 3 = 2, 35 % 4 = 3, 35 % 5 = 0
        {
            // flag = 0;
            // printf("Not Prime.");
            // break;
            return 0;
        }
    }
    // if (flag == 1)
    // {
    //     printf("Prime.");
    // }
    return 1;
}
int main()
{
    int i, n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);
    for (i = n1; i <= n2; i++)
    {
        if (primeCheck(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
/*
if (condition)
{
    code;
}
*/

// Next topic: Pointers
