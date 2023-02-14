#include <iostream>
#define SIZE 2
using namespace std;
class Batsman
{
public:
    char name[10];
    int matchPlayed;
    int rank;

public:
    void input()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "\nEnter Match Played by Cricketer : ";
        cin >> matchPlayed;
        cout << endl;
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
};

int main()
{

    Batsman obj[5], tmp;
    for (int i = 0; i < SIZE; i++)
    {
        obj[i].input();
        obj[i].calculateRank();
    }
    cout << "\n\n";
    cout << "\nArray Before Sorting\n\n";
    cout << "Name\t"
         << "Match Played\t"
         << "Rank\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << obj[i].name << "\t\t" << obj[i].matchPlayed << "\t" << obj[i].rank << "\n";
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (obj[j].rank > obj[j + 1].rank)
            {
                tmp = obj[j];
                obj[j] = obj[j + 1];
                obj[j + 1] = tmp;
            }
        }
    }
    cout << "\nArray After Sorting\n";
    cout << "\nName\t"
         << "Match Played\t"
         << "Rank\n\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << obj[i].name << "\t\t" << obj[i].matchPlayed << "\t" << obj[i].rank << "\n";
    }
    return 0;
}