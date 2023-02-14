#include <iostream>
using namespace std;

class Cricketer
{
    char name[10];
    int matchPlayed, rank;

public:
    void input()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "\nEnter Match Played by Cricketer : ";
        cin >> matchPlayed;
    }
    void calculateRank()
    {
        if (matchPlayed >= 150)
        {
            rank = 1;
        }
        else if (matchPlayed >= 100 && matchPlayed < 150)
        {
            rank = 3;
        }
        else if (matchPlayed >= 50 && matchPlayed < 100)
        {
            rank = 5;
        }
        else if (matchPlayed < 50)
        {
            rank = 100;
        }
    }
    void display()
    {
        cout << "\nName : " << name;
        cout << "\nMatch Played : " << matchPlayed;
        cout << "\nRank : " << rank;
    }
};

int main()
{

    Cricketer obj;
    obj.input();
    obj.calculateRank();
    cout << "\n\n";
    obj.display();
    return 0;
}