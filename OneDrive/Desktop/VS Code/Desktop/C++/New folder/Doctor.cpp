#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;

class Doctor
{
public:
    int id;
    char name[10], spec[15];

    Doctor()
    {
        // for (int i = 9999; i <= 99999; i++)
        // {
        id = rand() % 999 + 1;
        // }
    }
    void getData();
    void display();
};

void Doctor ::getData()
{
    cout << endl
         << "Enter Doctor's Name : ";
    cin >> name;
    // cout << endl
    //      << "Enter Doctor's ID : ";
    // cin >> id;
    cout << endl
         << "Enter Doctor's Specialization : ";
    cin >> spec;
}

void Doctor ::display()
{
    cout << name << "\t" << id << "\t" << spec << endl;
}

int main()
{
    Doctor d[5]; // d[0] d[1]    d[0].id > d[1].id
    int i, j, choice, docCount = 0;
    char sp[30];
    Doctor tmp;
    while (1)
    {
        cout << endl
             << "0 for exit";
        cout << endl
             << "1 for Add Doctor";
        cout << endl
             << "2 for Display";
        cout << endl
             << "3 for Sorting";
        cout << endl
             << "4 for Specialization";
        cout << endl
             << "Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            d[docCount].getData();
            docCount++;
            break;
        case 2:
        {
            for (i = 0; i < docCount; i++)
            {
                d[i].display();
            }
        }
        break;

        // cout << "\n\n";
        // cout << "Name\tID\tSpecialization\n";
        // cout << "-----------------------------------------------------------------------------------\n";
        case 3:
        {
            for (i = 0; i < docCount; i++)
            {
                for (j = 0; j < docCount - 1; j++)
                {
                    if (d[j].id > d[j + 1].id)
                    {
                        tmp = d[j];
                        d[j] = d[j + 1];
                        d[j + 1] = tmp;
                    }
                }
            }
        }
        cout << "\tSORTING EXECUTED!!!";
        break;
        case 4:
            cout << endl
                 << "Enter Doctor's Specialization : ";
            cin >> sp;
            for (i = 0; i < docCount; i++)
            {
                if (strcmp(d[i].spec, sp) == 0)
                {
                    d[i].display();
                }
            }
            break;
        default:
            cout << endl
                 << "Invalid Operation\nPlease TRY AGAIN!!!";
            break;
        }
    }
    return 0;
}