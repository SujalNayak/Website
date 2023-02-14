#include <iostream>
using namespace std;

class Employee
{
    char name[10];
    int salary, tax1;

public:
    void input()
    {
        cout << "Enter name";
        cin >> name;
        cout << "\nEnter salary";
        cin >> salary;
    }
    void tax()
    {
        if (salary >= 100000)
        {
            tax1 = 0.2 * salary;
            cout << salary << tax1;
        }
        else if (salary >= 50000 && salary < 100000)
        {
            tax1 = 0.1 * salary;
            cout << salary << tax1;
        }
        else
        {
            cout << "No TAX!!";
        }
    }
};

int main()
{
    Employee obj;
    obj.input();
    obj.tax();

    return 0;
}