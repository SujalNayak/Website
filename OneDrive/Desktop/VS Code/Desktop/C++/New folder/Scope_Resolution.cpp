#include <iostream>
#include <string.h>
using namespace std;
class Person
{

public:
    char name[10];
    char getData();
    char *getName();
    inline int printlength();
};

int Person::printlength()
{
    int len;
    len = strlen(name);
    return len;
}
char Person::getData()
{
    cout << endl
         << "Enter name : ";
    cin >> name;
}

char *Person::getName()
{
    return name;
}

int main()
{
    Person p;
    p.getData();
    cout << endl
         << "Name = "
         << p.getName();
    cout << endl
         << "Length = "
         << p.printlength();
    return 0;
}