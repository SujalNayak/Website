#include <iostream>
using namespace std;

class Summit
{
    int software, hospitality, real_estate, machinery, others, year;

public:
    void input();
    void print();
    
    void highestsoftware()
    {

    }
};

void Summit ::input()
{
    cout << endl
         << "Enter year : ";
    cin >> year;
    cout << endl
         << "Enter people come from Software Industry : ";
    cin >> software;
    cout << endl
         << "Enter people come from Hospitality Industry : ";
    cin >> hospitality;
    cout << endl
         << "Enter people come from Real Estate Industry : ";
    cin >> real_estate;
    cout << endl
         << "Enter people come from Machine Industry : ";
    cin >> machinery;
    cout << endl
         << "Enter people come from Any other Industry : ";
    cin >> others;
}
void Summit ::print()
{
    cout << endl
         << year << "\t" << software << "\t" << hospitality << "\t" << real_estate << "\t" << machinery << "\t" << others;
}

int main()
{
    Summit y[3];
    int i;
    for (i = 1; i <= 3; i++)
    {
        y[i].input();
    }

    cout << endl
         << "Year\tSoftware\tHospitality\tReal Estate\tMachinery\tOthers\n"
         << "-------------------------------------------------------------------------------------------";
    for (i = 1; i <= 3; i++)
    {
        y[i].print();
    }

    return 0;
}