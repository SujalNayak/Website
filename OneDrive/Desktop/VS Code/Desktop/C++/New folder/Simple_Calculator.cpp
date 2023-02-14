#include <iostream>
using namespace std;

class Calc
{
    int a, b;

public:
    void getData()
    {
        cout << "\n\nEnter two numbers\n";
        cin >> a >> b;
    }
    void sum()
    {
        cout << endl
             << a << "+" << b << "=" << a + b;
    }
    void sub()
    {
        cout << endl
             << a << "-" << b << "=" << a - b;
    }
};

int main()
{
    Calc obj;
    int choice;
    while (1)
    {
        obj.getData();
        cout << endl
             << "\n0 for exit"
             << "\n1 for Addition"
             << "\n2 for Subtraction"
             << "\nEnter your choice\n\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            obj.sum();
            break;
        case 2:
            obj.sub();
            break;
        default:
            cout << "Invalid OPERATION!!!\nPlease try AGAIN...";
            break;
        }
    }
    return 0;
}