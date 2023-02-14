/*class : Person
    firstName
    lastName
    gender

    input()
    print()

create 3 person ram sita ravan and print in tabular format.

--------------------------------------------

modify Person class  and add 3 setters for firstname,
lastname and gender so person can modify any detail using setters.
--------------------------------------------
modify Person class and add 3 getters for firstname,
lastname and gender so person can we can print
single field any time.
--------------------------------------------

add 1 more field in person class salary.
every person get 10000 as salary.

--------------------------------
print all person details in tabular format
----------------------------------
find who get highest salary
---------------------------*/

#include <iostream>
#include <string.h>
using namespace std;
class Person
{
public:
    char fname[10], lname[10], gender[10];
    int salary;
    Person()
    {
        salary = 10000;
    }
    void input();
    void print();
    void printsal();
    void fnamesetter(char *fn)
    {

        strcpy(fname, fn);
    }
    void lnamesetter(char *ln)
    {

        strcpy(lname, ln);
    }
    void gendersetter(char *g)
    {
        strcpy(gender, g);
    }
    void salarysetter(int a)
    {
        salary = a;
    }
    int getsalary()
    {
        return salary;
    }
};

void Person ::input()
{
    cout << "\nEnter First Name\n";
    cin >> fname;
    cout << "\nEnter Last Name\n";
    cin >> lname;
    cout << "\nEnter Gender\n";
    cin >> gender;
}

void Person::print()
{
    cout << endl
         << fname << "\t\t" << lname << "\t\t" << gender;
}

void Person ::printsal()
{
    cout << endl
         << fname << "\t\t" << lname << "\t\t" << gender << "\t\t" << salary;
}

int main()
{
    Person p[3];
    int choice, sal, max;
    p[1].input();
    p[2].input();
    p[3].input();
    cout << "\n\n";
    cout << endl
         << "\nFirst Name\tLast Name\tGender\n"
         << "-----------------------------------------\n";
    p[1].print();
    p[2].print();
    p[3].print();

    p[1].fnamesetter("Sujal");
    p[2].fnamesetter("Shivan");
    p[3].fnamesetter("Honey");
    p[1].lnamesetter("Nayak");
    p[2].lnamesetter("Pandya");
    p[3].lnamesetter("Patel");
    p[1].gendersetter("Male");
    p[2].gendersetter("Male");
    p[3].gendersetter("Female");

    cout << endl
         << "\n\nFirst Name\tLast Name\tGender\n"
         << "-----------------------------------------\n";
    p[1].print();
    p[2].print();
    p[3].print();
    cout << "\n\n";
    for (int i = 1; i <= 3; i++)
    {
        cout << endl
             << "Enter salary of Person " << i;
        cout << "\n";
        cin >> sal;
        p[i].salarysetter(sal);
    }
    cout << endl
         << "\n\nFirst Name\tLast Name\tGender\t\tSalary\n"
         << "-----------------------------------------------------------------\n";

    p[1].printsal();
    p[2].printsal();
    p[3].printsal();
    max = p[1].getsalary();
    if (p[2].getsalary() > max)
    {
        max = p[2].getsalary();
    }
    else if (p[3].getsalary() > max)
    {
        max = p[3].getsalary();
    }
    cout << endl
         << "Highest Salary is Taken by\n";
    cout << endl
         << "\n\nFirst Name\tLast Name\tGender\t\tSalary\n"
         << "-----------------------------------------------------------------\n";
    for (int i = 1; i < 3; i++)
    {
        if (p[i].getsalary() == max)
        {
            p[i].printsal();
        }
    }
    return 0;
}
