#include <iostream>
#include <string.h>
using namespace std;
class Bowler
{
    char name[10];
    int bowlings, rank;

public:
    Bowler()
    {
        cout << endl
             << "I am Constructer" << endl;
        strcpy(name, "");
        bowlings = 0;
        rank = 0;
    }
    Bowler(int b)
    {
        bowlings = b;
    }
    void getData()
    {
        cout << "\nEnter Name\n";
        cin >> name;
        cout << "\nEnter bowlings";
        cin >> bowlings;
    }
    void calculateRank()
    {
        if (bowlings > 100)
        {
            rank = 1;
        }
        else if (bowlings > 50)
        {
            rank = 50;
        }
        else if (bowlings >= 1)
        {
            rank = 100;
        }
        else
        {
            rank = 0;
        }
    }
    char *getName()
    {
        return name;
    }
    void setRank(int x)
    {
        rank = x;
        // cout << "Rank = " << x;
    }
    void display()
    {
        cout << endl
             << "Name : " << name;
        cout << endl
             << "Bowlings : " << bowlings;
        cout << endl
             << "Rank : " << rank;
    }
};

int main()
{
    Bowler b;
    b.getData();
    b.calculateRank();
    b.display();
         cout << "\n\n";
    b.setRank(150);
    b.display();
    cout << endl<< endl
         << b.getName();
         return 0;
}