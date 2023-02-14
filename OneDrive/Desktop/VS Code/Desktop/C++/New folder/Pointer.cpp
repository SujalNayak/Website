#include <iostream>
using namespace std;
/*class Parent
{
public:
    Parent() { cout << endl
                    << "Parent()"; }
    void greet();
};

class Child : public Parent
{
public:
    Child()
    {
        cout << endl
             << "Child()";
    }
    void greet();
};

void Parent ::greet()
{
    cout << endl
         << "good morning";
}
void Child ::greet()
{
    cout << endl
         << "good afternoon";
}

int main()
{
    Parent parent;
    parent.greet();
    Child child;
    Parent *p;
    p = &parent;
    p->greet();
    p = &child;
    p->greet();
    return 0;
}*/

// CONSTRUCTOR OVERLOADING...


class Parent{
    public:
/*        Parent(){
            cout<<endl<<"This is a parent class";
        }
*/
// constructor overloading

        Parent(int a){
            cout<<endl<<"This is a parameterized constructor";
        }

        Parent(char b){
            cout<<endl<<"This is a parameterized constructor with char";
        }
        void greet();
};

class Child: public Parent{
    public:
        int age;

        Child():Parent('c'){
            age = 10;
            cout<<endl<<"This is a child class";
        }
        Child(int a):Parent(10){
            age = a;
        }
        void greet();
};

void Parent::greet(){
    cout<<endl<<"Good morning";
}

void Child::greet(){
    cout<<endl<<"Good afternoon";
}

int main(){
  // Child child;
    Child child;
    cout<<endl<<child.age;

    Child child2(35);
    cout<<endl<<child2.age;

    return 0;
}
