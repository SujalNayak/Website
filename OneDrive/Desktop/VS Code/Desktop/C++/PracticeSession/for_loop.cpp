#include <iostream>
using namespace std;

/*1. print multiplication table of user given input

5*1=5

5 * 2 = 10
.
.
.

5 * 10 = 50

int main()
{
    int num;
    cout << endl << "Enter number : ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << endl << num << " x " << i << " = " << num*i;
    }

    return 0;
}*/

/* 2. print 1 to 10 natural number.
int main()
{
    int num, i;
    for (i = 1; i <= 10; i++)
    {
        cout << endl << i;
    }
    return 0;
}
*/

/* 3. print even numbers between 1 to 20

int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << endl
                 << i;
        }
    }
    return 0;
}
*/
// 4. print even number between 1 to 20 without using if else

/* 5. print reverse number(10 to 1)

int main()
{
    int num, i;
    for (i = 10; i <= 1; i--)
    {
        cout << endl << i;
    }
    return 0;
}*/

/* 6. print sum of first 10 numbers ( 1+2 + 3+ 10)

int main()
{
    int ans;
    for (int i = 1; i < 10; i++)
    {
        cout << i << " + ";
    }
    ans = (10 * 11) / 2;
    cout << "10 = " << ans;
    return 0;
}*/

/* 7. print sum of all even numbers between 1 to 20.

int main()
{
    int ans = 0;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            ans = ans + i;
        }
    }
    cout << "Sum of all even numbers between 1 & 20 is " << ans;
    return 0;
}*/

/* 8. print sum of all odd numbers between 1 to 20.

int main()
{
    int ans = 0;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            ans = ans + i;
        }
    }
    cout << "Sum of all odd numbers between 1 & 20 is " << ans;
    return 0;
}*/

/*9. print first and last digit of number (22423 --> first digit: 2, last digit 3)

int main()
{
    int num, lastdigit, firstdigit;
    cout << endl
         << "Enter number : ";
    cin >> num;
    lastdigit = num % 10;
    firstdigit = num;
    while (firstdigit >= 10)
    {
        firstdigit = firstdigit / 10;
    }

    cout << endl
         << "First Digit is " << firstdigit;
    cout << endl
         << "Last Digit is " << lastdigit;
    return 0;
}*/

/*10. count total number of digit. (353423 --> 6)

int main()
{
    int num, count = 0;
    cout << endl
         << "Enter number : ";
    cin >> num;
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    cout << endl << "Total digit is " << count;
    return 0;
}*/

//11. print sum of all digits in number (5463 ->18)

int main()
{
    int num, sum, a[10];
    cout << endl
         << "Enter number : ";
    cin >> num;
    while(num != 0)
    {

    }
    return 0;
}

// 12. print reverse number and store in one variable (3234 --> 4323)