#include <iostream>
#include <string.h>
using namespace std;
#define min_bal 5000

class RoyalBank
{
    int bal, pwd, p;
    char usn[15], u[15];

public:
    RoyalBank()
    {
        cout << "Your default deposited balance is 10000\n";
        bal = 10000;
    }
    void getData()
    {
        cout << "Welcome to Royal Bank\n";
        cout << "Thank you for opening new account in our Bank!!\n\n";
        cout << "Set username to your account\n";
        cin >> usn;
        cout << "Set Password to your account\n";
        cin >> pwd;
    }
    void secure()
    {
        cout << "Enter username to your account\n";
        cin >> u;
        cout << "Enter Password to your account\n";
        cin >> p;
    }
    void wid()
    {
        if (strcmp(usn, u) == 0 && p == pwd)
        {
            int amt;
            cout << "\n\nEnter the ammount\n";
            cin >> amt;
            if ((bal - amt) < min_bal)
            {
                cout << "Insufficient money in your account\nWithdrawal Operation Denied!!!";
            }
            else
            {
                bal = bal - amt;
                cout << "\nWITHDRAWAL OPERATION SUCCESSFULLY COMPLETED!!!\n";
            }
        }
        else
        {
            printf("\nIncorrect Username or Password\n");
        }
    }
    void deposit()
    {

        if (strcmp(usn, u) == 0 && p == pwd)
        {
            int amt;
            cout << "\n\nEnter the ammount\n";
            cin >> amt;
            bal = bal + amt;
            cout << endl
                 << amt << " Rs. DEPOSITED!!!\n";
        }
        else
        {
            printf("\nIncorrect Username or Password\n");
        }
    }
    int getBal()
    {
        void secure();
        if (strcmp(usn, u) == 0 && p == pwd)
        {
            return bal;
        }
        else
        {
            printf("\nIncorrect Username or Password\n");
        }
    }
};

int main()
{
    RoyalBank c;
    int choice;
    c.getData();
    while (1)
    {

        cout << endl
             << "\n0 for exit"
             << "\n1 for Withdrawl"
             << "\n2 for Deposit"
             << "\n3 for Check Balance"
             << "\nEnter your choice\n\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            c.secure();
            c.wid();
            break;
        case 2:
            c.secure();
            c.deposit();
            break;
        case 3:
            c.secure();
            cout << endl
                 << "Your account balance is "
                 << c.getBal();
            break;
        default:
            cout << "Invalid OPERATION!!!\nPlease try AGAIN...";
            break;
        }
    }
    return 0;
}