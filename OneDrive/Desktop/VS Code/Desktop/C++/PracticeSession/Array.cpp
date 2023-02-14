#include <iostream>
using namespace std;

// int main()
// {
//     int max, a[] = {1, 2, 8, 4, 6, 7};
//     max = a[0];
//     for (int i = 1; i < 6; i++)
//     {
//         if(max < a[i])
//         {
//             max = a[i];
//         }
//     }
//     cout << max;
//     return 0;
// }

// int main()
// {
//     int count = 0, a[] = {1,2,3,4,5,6,7};
//     for (int i = 0; i < 7; i++)
//     {
//         if(a[i] % 2 == 0)
//         {
//             count++;
//         }
//     }
//     cout << "odd numbers = " << 7 - count;
//     cout << endl << "Even numbers = " << count;
//     return 0;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, even[10], odd[10];
//     for (int i = 0; i < 9; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             even[i] = a[i];
//         }
//     }
//     for (int i = 0; i < 9; i++)
//     {
//         if (a[i] % 2 != 0)
//         {
//             odd[i] = a[i];
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int num, i, j, count = 0;
//     cout << "Enter Total Elements : ";
//     cin >> num;
//     int a[num];
//     cout << endl
//          << "Enter elements : \n";
//     for (int i = 0; i < num; i++)
//     {
//         cout << endl
//              << "a[" << i << "] : ";
//         cin >> a[i];
//     }
//     for (i = 0; i < num; i++)
//     {
//         cout << endl;
//         for (j = i + 1; j < num; j++)
//         {
//             cout << a[i] << " : " << a[j] << "\t";
//             count++;
//         }
//     }
//     cout << endl
//          << "Total iterration of loop = " << count;
//     return 0;
// }

// SUB Array

int main()
{
    int num, i, j, k, count = 0, max;
    cout << endl
         << "Enter Total  number of elements : ";
    cin >> num;
    int a[num], sum;
    cout << endl
         << "Enter elements : \n";
    for (int i = 0; i < num; i++)
    {
        cout << endl
             << "a[" << i << "] : ";
        cin >> a[i];
    }
    cout << endl
         << "Possible Pairs : \n\n";
    max = a[0];
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num; j++)
        {
            sum = 0;
            for (k = i; k <= j; k++)
            {
                cout << a[k];
                sum += a[k];
            }
            if (a[k] > max)
            {
                max = a[k];
            }                
            count++;
            cout << "\t";
        }
        cout << endl;
    }
    cout << max;
    cout << endl
         << "Total iterration of loop = " << count;
    return 0;
}