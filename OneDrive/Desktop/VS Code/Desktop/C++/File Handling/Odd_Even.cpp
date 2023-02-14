#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int i, num;
    ofstream fout;
    fout.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\numbers.txt");
    for (i = 1; i <= 5; i++)
    {
        cout << "\nEnter number";
        cin >> num;
        fout << num;  // 10
        fout << endl; //\n
    }
    fout.close();

    // read data from file
    ifstream fin;
    fin.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\numbers.txt");

    ofstream odd;
    odd.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\odd.txt");

    ofstream even;
    even.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\even.txt");

    for (i = 1; i <= 5; i++)
    {
        fin >> num; // fin >> num

        if (num % 2 == 0)
        {
            // even
            even << num << endl;
        }
        else
        {
            // odd
            odd << num << endl;
        }
    }
    fin.close();
    odd.close();
    even.close();

    // numbers.txt odd.txt even.txt

    ifstream numr, oddr, evenr;

    numr.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\numbers.txt");
    cout << endl
         << "Content of the Numbers.txt\n";
    for (i = 1; i <= 5; i++)
    {
        numr >> num;
        cout << num << endl;
    }
    numr.close();

    oddr.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\odd.txt");
    cout << endl
         << "content of the odd.txt\n";
    while (!oddr.eof())
    {
        oddr >> num;
        cout << num << endl;
    }
    oddr.close();

    evenr.open("C:\\Users\\Victus\\OneDrive\\Desktop\\.vs\\Desktop\\C++\\TXT Files\\even.txt");
    cout << endl
         << "Content of the even.txt\n";
    while (!evenr.eof())
    {
        evenr >> num;
        cout << num << endl;
    }
    evenr.close();

    return 0;
}