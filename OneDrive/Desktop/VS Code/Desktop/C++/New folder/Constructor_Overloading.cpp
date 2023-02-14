#include <iostream>
using namespace std;

class Parent
{
public:
int a;
    Parent()
    {
        cout << endl << "This is Default Constructor of Parent class";      
    }
    Parent(int a)
    {        
        cout << endl << "This is Parameterisd Constructor of Parent class";      
    }
};

class Child : Parent
{
    public:
    int b;
    Child()
    {       
        cout << endl << "This is Default Constructor of Child class";      
    }
    Child(int b)
    {        
        cout << endl << "This is Parameterisd Constructor of Child class";      
    }
};

int main()
{
    Parent parent;
    Child child;
    child.
}
