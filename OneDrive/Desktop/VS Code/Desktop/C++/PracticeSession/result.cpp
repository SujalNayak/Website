#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

class Result
{
    char name[10];
    int maths, sci, eng, perc;
    vector<char> name;
public:
    void getData();
    void printData();
};

void Result ::getData()
{
    cout << endl
         << "Enter Name : ";
    cin >> name;
    name.push_back(name);
    cout << endl
         << "Enter Marks of Mathematics : ";
    cin >> maths;
    cout << endl
         << "Enter Marks of Science : ";
    cin >> sci;
    cout << endl
         << "Enter Marks of English : ";
    cin >> eng;
    perc = (maths + sci + eng) / 3;
}

void Result ::printData()
{
    cout << endl
         << "Name\tMathematics\tScience\tEnglish\tPercentage";
    // for (int i = 0; i < ; i++)
    {
        cout << name << "\t" << maths << "\t" << sci << "\t" << eng << "\t" << perc;
    }
}

int main()
{
    Result r;
    int choice;
    vector<int> v;
    while (1)
    {
        cout << endl
             << "Enter 1 for add student";
        cout << endl
             << "Enter 2 for print result";
        cout << endl
             << "Enter 3 for exit";
        cin >> choice;
        switch (choice)
        {
        case 1:
            r.getData();
            // v.push_back();
            break;

        case 2:
            r.printData();
            break;
        case 3:
            exit(0);
        }
    }
}