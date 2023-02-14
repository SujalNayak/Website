#include <iostream>

using namespace std;

int main()
{
    int i, j, temp, n, a[100];
    cout << "Enter n: ";
    cin >> n;
    cout << endl << "Enter array members: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[n];
    }
    
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }            
        }        
    }
    
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}