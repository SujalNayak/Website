#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    char name[10];
    ifstream fin, vowelr;
    ofstream fout, vowel;
    fout.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Names.txt");
    for (int i = 0; i < 3; i++)
    {
        cout << endl
             << "Enter Name : ";
        cin >> name;
        fout << name << endl;
    }
    fout.close();

    // Reading names...
    cout << endl
         << "Reading names from Names.txt\n";
    fin.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Names.txt");
    for (int i = 0; i < 3; i++)
    {
        fin >> name;
        cout << name << endl;
    }
    fin.close();

    fin.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Names.txt");
    vowel.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Vowel.txt");
    while (!fin.eof())
    {
        if (name[0] == 'A' || name[0] == 'E' || name[0] == 'I' || name[0] == 'O' || name[0] == 'U' || name[0] == 'a' || name[0] == 'e' || name[0] == 'i' || name[0] == 'o' || name[0] == 'u')
        {
            fin >> name;
            vowel << name << endl;
        }
    }
    vowel.close();
    fin.close();

    cout << endl
         << "Reading names from Vowel.txt\n";
    vowelr.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Vowel.txt");
    while (!vowelr.eof())
    {
        vowelr >> name;
        cout << endl
             << name;
    }

    return 0;
}