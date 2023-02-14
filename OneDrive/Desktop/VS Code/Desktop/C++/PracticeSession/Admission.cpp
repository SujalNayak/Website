#include <iostream>
#include <string.h>
using namespace std;

// class Admission
// {
//     int maths, physics, chemistry, eligibility;
//     char name[10], e[3];

// public:
//     Admission()
//     {
//         eligibility = 0;
//     }
//     int input();
//     int condition();
//     int display();
// };

// int main()
// {
//     Admission s[3];
//     cout << "\nEnter details for first student\n";
//     s[1].input();
//     cout << "\nEnter details for second student\n";
//     s[2].input();
//     cout << "\nEnter details for third student\n";
//     s[3].input();
//     s[1].condition();
//     s[2].condition();
//     s[3].condition();
//     cout << endl << endl
//          << "Name\t\tMathematics\tPhysics\t\tChemistry\tEligible??\n"
//          << "------------------------------------------------------------------------\n";
//     s[1].display();
//     s[2].display();
//     s[3].display();
//     return 0;
// }

// int Admission ::input()
// {
//     cout << "\nEnter student's Name : ";
//     cin >> name;
//     cout << "\nEnter student's Mathematics Marks : ";
//     cin >> maths;
//     cout << "\nEnter student's Physics Marks : ";
//     cin >> physics;
//     cout << "\nEnter student's Chemistry Marks : ";
//     cin >> chemistry;
// }

// int Admission ::condition()
// {
//     if ((physics + chemistry + maths) >= 200 || (physics + maths) >= 150)
//     {
//         eligibility = 1;
//         strcpy(e, "Yes");
//     }
//     else
//     {
//         strcpy(e, "No");
//     }
// }

// int Admission ::display()
// {
//     cout << name << "\t\t" << maths << "\t\t" << physics << "\t\t" << chemistry << "\t\t" << e << endl;
// }
