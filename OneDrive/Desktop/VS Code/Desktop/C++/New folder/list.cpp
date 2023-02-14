#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    list<int>::iterator i;

    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << endl;
    }
    l.reverse();
    cout << endl
         << "reverse:";
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << endl;
    }

    cout << endl
         << "front()" << l.front();
    cout << endl
         << "back()" << l.back();

    return 0;
}