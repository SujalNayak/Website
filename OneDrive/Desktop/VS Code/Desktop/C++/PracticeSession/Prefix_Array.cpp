#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << endl
         << "Enter total elements of array : ";
    cin >> num;
    int a[num], p[num];
    for (int i = 0; i < num; i++)
    {
        cout << endl
             << "a[" << i << "] = ";
        cin >> a[i];
    }
    p[0] = a[0];
    cout << p[0];
    for (int i = 1; i < num; i++)
    {
        p[i] = a[i] + p[i - 1];
        cout << "   " << p[i];
    }

    for (int i = 1; i < num; i++)
    {
        for (int i = 1; i < num; i++)
        {
            sum = p[] - p[ - 1];           
        }        
    }    
    return 0;
}
