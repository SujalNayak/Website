#include <iostream>
using namespace std;

class Employee
{
    char firstName, lastName;
    int salary;

public:
    void getData();
    void printData();
};

class PartTimeEmployee : public Employee
{
    int majuri;

public:
    void getData();
    void printData();
};

void Employee ::getData()
{
    cout << endl
         << "Enter First Name : ";
    cin >> firstName;
    cout << endl
         << "Enter Last Name : ";
    cin >> lastName;
    cout << endl
         << "Enter Salary : ";
    cin >> salary;
}

void Employee ::printData()
{
    cout << endl
         << firstName << "  " << lastName << "   " << salary;
}

void PartTimeEmployee ::getData()
{
    Employee::getData();
    cout << endl
         << "Enter majuri : ";
    cin >> majuri;
}
void PartTimeEmployee ::printData()
{
    Employee::printData();
    cout << "   " << majuri;
}
int main()
{
    Employee e;
    PartTimeEmployee pt;
    pt.getData();
    pt.printData();
    return 0;
}