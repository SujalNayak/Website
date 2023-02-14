#include <iostream>
using namespace std;

// 14. Print all factors of a given number

// int main()
// {
//     int a[100], num, i;
//     cout << endl
//          << "Enter Number : ";
//     cin >> num;
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << endl
//                  << i;
//         }
//     }
//     return 0;
// }

// 15. Find HCF of two numbers

// int main()
// {
//     int hcf, num1, num2, i;
//     cout << endl
//          << "Enter two Number : ";
//     cin >> num1 >> num2;
//     for (i = 1; i <= num1 || i <= num2; i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     cout << endl
//          << "HCF = " << hcf;
//     return 0;
// }

// 16. Find LCM of two numbers

int main()
{
    int n1, n2, max;
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << endl
                 << "The LCM of " << n1 << " and " << n2 << " is " << max;
            break;
        }
        ++max;
    }
    return 0;
}