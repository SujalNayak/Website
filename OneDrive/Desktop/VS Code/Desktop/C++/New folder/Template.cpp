#include <iostream>
#include <math.h>
using namespace std;

template(T a, T b);

class Calc
{
    T a;

public:
    void add(T a, T b)
    {
        return add(a, b);
    }
    void sqr(T a)
    {
        return sqr(a);
    }
    void cube(T a)
    {
        return a * a * a;
    }
};

int main()
{
    Calc c;
    int a, b;
    cout << endl
         << "Enter two numbers :";
    cin >> a >> b;
    cout << endl
         << "Addition = " << c.add(a, b);
    cout << endl
         << "Square(a) = " << c.sqr(a) << endl
         << "Square(b) = " << c.sqr(b);
    cout << endl
         << "Cube(a) = " << c.cube(a) << endl
         << "Cube(b) = " << c.cube(b);
    return 0;
}