#include <iostream>

#include <vector> using namespace std;

int main()
{
    vector<int> v;
    int size, i, num;
    cout << "How many numbers you want to store?";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        cout << endl
             << "enter number";
        cin >> num;
        v.push_back(num);
    }
    for (auto p = v.begin(); p!=v.end() ; i++)
    {
        cout << 
    }
    

    // cout << endl
    //      << "Vector Data: " << endl;
    // for (auto p = v.begin(); p !-v.end(); p++)
    // {
    //     cout << *p << endl
    // };
    // find sum of all elements
    // find max from
    return 0;
}