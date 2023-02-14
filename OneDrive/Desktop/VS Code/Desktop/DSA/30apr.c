// #include<stdio.h>
// int factorial(int n){       // n = 5
//     int f = 1, i;
//     for(i=1; i<=n; i++){    // 1*2*3*4*5
//         f = f * i;
//     }
//     return f;
// }

// int main(){
//     int a, b, c, d, e, total;
//     printf("Enter 5 integers:\n");
//     scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//     total = factorial(a) + factorial(b) + factorial(c) + factorial(d) + factorial(e);
//     printf("Total = %d", total);
//     return 0;
// }
/*
1. Write a C function that takes radius of a circle as an argument and returns the area of that circle. A programmer visits a Pizza shop and pays for one 8 inch pizza. The shopkeeper didn't have any 8-inch pizza base so they give 2 Pizzas of 4 inch to the programmar. Write a C main program that checks whether the programmer was justified or cheated by the shop owner.

2. Write a C function that takes an integer in its argument and prints all its factors. Write a main program that asks user to enter 5 integers and prints them along with their factors in form of a table.
example:
number      factors
6           1, 2, 3, 6
15          1, 3, 5, 15
18          1, 2, 3, 6, 9, 18

*/
#include<stdio.h>

int evenCheck(int n){
    if (n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a, b, i;
    printf("Enter a & b: ");
    scanf("%d%d", &a, &b);
    printf("Even numbers between %d and %d are:\n", a, b);
    for(i = a; i <= b; i++)
    {
        if (evenCheck(i) == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
/*
Homework:
*/