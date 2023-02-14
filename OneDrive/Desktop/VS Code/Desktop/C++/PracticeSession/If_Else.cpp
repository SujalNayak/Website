#include <iostream>
#include <string.h>
using namespace std;

// int main()
// {
//     int a,b;
//     cout << "Enter two numbers";
//     cin>> a>>b;

//     if (a>b)
//     {
//         cout <<endl<<  a << " is greater than " << b;
//     }
//     else
//     {
//         cout <<endl<<  b << " is greater than " << a;
//     }

//     return 0;
// }

// int main()
// {
//     int a, b, c, max;
//     cout << endl
//          << "Enter 3 numbers";
//     cin >> a >> b >> c;
//     max = a;
//     if (b > a)
//     {
//         max = b;
//     }
//     else if (c > max)
//     {
//         max = c;
//     }

//     cout << endl
//          << max << " is Greatest";

//     return 0;
// }

// int main()
// {
//     int a;
//     cout << "Enter number";
//     cin >> a;
//     if (a % 2 == 0)
//     {
//         cout << endl
//              << a << " is even";
//     }
//     else
//     {
//         cout << endl
//              << a << " is odd";
//     }

//     return 0;
// }

// int main()
// {
//     char a;
//     cout<< "Enter Any Letter in Capital";
//     cin>> a;
//     if (a == "A" || a == "E" || a == "I" || a == "O" || a == "U")
//     {
//         cout << endl << a << " is Vowel";
//     }
//     else
//     {
//         cout << endl << a << " is Consonent";
//     }

//     return 0;
// }

// int main()
// {
//     char *a;
//     cout << endl<< "Enter any character";
//     cout << endl;
//     cin >> a;
//     if (a == "0" || a == "1" || a == "2" || a == "3" || a == "4" || a == "5" || a == "6" || a == "7" || a == "8" || a == "9")
//     {
//         cout << endl<< a << " is number";
//     }
//     else if (a == "!" || a == "@" || a == "#" || a == "$" || a == "%" || a == "^" || a == "&" || a == "*" || a == "?")
//     {
//         cout << endl<< a << " is special character";
//     }
//     else
//     {
//         cout << endl<< a << " is alphabet";
//     }

//     return 0;
// }

// class Grade
// {
//     int percentage;
//     char grade;
//     int p[5];

// public:
//     void input()
//     {
//         cout << "\nEnter percentage of physics : ";
//         cin >> p[1];
//         cout << "\nEnter percentage of Chemistry : ";
//         cin >> p[2];
//         cout << "\nEnter percentage of Biology : ";
//         cin >> p[3];
//         cout << "\nEnter percentage of Mathematics : ";
//         cin >> p[4];
//         cout << "\nEnter percentage of Computer : ";
//         cin >> p[5];
//     }

//     void percentage()
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             if (p[i] >= 90)
//             {
//                 grade = 'A';
//             }

//             else if (p[i] >= 80 && p[i] < 90)
//             {
//                 grade = 'B';
//             }
//             else if (p[i] >= 70 && p[i] < 80)
//             {
//                 grade = 'C';
//             }
//             else if (p[i] >= 60 && p[i] < 70)
//             {
//                 grade = 'D';
//             }
//             else if (p[i] >= 40 && p[i] < 60)
//             {
//                 grade = 'E';
//             }
//             else
//             {
//                 grade = 'F';
//             }
//         }
//     }

//     void display()
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             cout << endl
//                  << p[i] << "\t" << grade;
//         }
//     }
// };

// int main()
// {
//     Grade s;
//     s.input();
//     s.percentage();
//     cout << "\nPercentage\tGrade\n";
//     cout << "----------------------------------------------------------------------\n";
//     s.display();
//     return 0;
// }

// int main()
// {
//     int n, a[10];
//     cout << endl
//          << "Enter ammount : ";
//     cin >> n;
//     a[1] = n % 2000;
//     if (n % 2000 == 0)
//     {
//         a[2] = n % 500;
        
//     }
// }


int main()
{
    int a = 5,b = 20,c = 40, min;
    min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
    // min = min < c ? min : c;
    cout << endl << "min = " << min;
    return 0;
}