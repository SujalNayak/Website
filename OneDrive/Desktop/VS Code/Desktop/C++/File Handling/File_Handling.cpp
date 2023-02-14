#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int num;
    ofstream fout;
    // Give input to file
    fout.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Number.txt");
    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Enter number (i) : ";
        cin >> num;
        fout << num;
        fout << endl;
    }
    fout.close();

    // Read from file
    ifstream fin;
    fin.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\Number.txt");
    cout << "\nREADING FROM FILE...\n";
    for (int i = 0; i < 5; i++)
    {
        fin >> num;
        cout << num;
        cout << endl;
    }
    fin.close();
    return 0;
}