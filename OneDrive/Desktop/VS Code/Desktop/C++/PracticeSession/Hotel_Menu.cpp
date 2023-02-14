/*
1. South Indian
    1. Idli
        1. masala idli(10)
        2. fried idli(20)
        3. rava idli(30)
    2. Dosa
        1. plain dosa(10)
        2. masala(20)
        3. mysore(30)
    3. Vada
        1. masala (10)
        2. medu(20)
        3. sambar(30)

2. Gujarati
    1.Khichdi
        1. Masala khichdi
        2. Simple khichdi
        3. Fried khichdi
    2.Sabzi
        1. Bhindi
        2. Tuver
        3. Gobi
    3.Sweet
        1. Gulab jamun
        2. Laadoo
        3. Shiro
3. Punjabi
    1.Sabzi
        1. Paneer tikka
        2. Palak Paneer
        3. Paneer balti
    2.Naan
        1. Butter naan
        2. Stuffed naan
        3. Simple naan
    3.Dal
        1. Dal fry
        2. Dal tadka
        3. Mixed dal
4. chinese
    1.
    2.
    3.
5. Fast Food
    1.
    2.
    3.
*/

#include <iostream>

using namespace std;

int main()
{
    int choice, sChoice, pChoice, gChoice, fChoice, cChoice, idliChoice, dosaChoice, vadaChoice, plates, khichdiChoice, sabziChoice, sweetChoice, spChoice, dalChoice, naanChoice, noodlesChoice, momosChoice, soupChoice, swhChoice, pizzaChoice, burgerChoice;
    cout << "1.South Indian" << endl;
    cout << "2.Gujarati" << endl;
    cout << "3.Punjabi" << endl;
    cout << "4.Chinese" << endl;
    cout << "5.Fast Food" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You have selected South Indian food:" << endl;
        cout << "1.Idli" << endl;
        cout << "2.Dosa" << endl;
        cout << "3.Vada" << endl;
        cout << "Enter your choice: " << endl;
        cin >> sChoice;
        switch (sChoice)
        {
        case 1:
            cout << "You have selectd Idli:" << endl;
            cout << "1.Masala Idli(10)" << endl;
            cout << "2.Fried Idli(20)" << endl;
            cout << "3.Rava Idli(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> idliChoice;
            switch (idliChoice)
            {
            case 1:
                cout << "You have selected Masala Idli:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Fried Idli:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Rava Idli:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 2:
            cout << "You have selectd Dosa:" << endl;
            cout << "1.Plain Dosa(10)" << endl;
            cout << "2.Masala Dosa(20)" << endl;
            cout << "3.Mysore Masala Dosa(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> dosaChoice;
            switch (dosaChoice)
            {
            case 1:
                cout << "You have selected Plain Dosa:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Masala Dosa:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Mysore Masala Dosa:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 3:
            cout << "You have selectd Vada:" << endl;
            cout << "1.Masala Vada(10)" << endl;
            cout << "2.Medu Vada(20)" << endl;
            cout << "3.Sambar Vada(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> vadaChoice;
            switch (vadaChoice)
            {
            case 1:
                cout << "You have selected Masala Vada:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Medu Vada:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Sambar vada:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
        }
        break;
    case 2:
        cout << "You have selected GUjarati food:" << endl;
        cout << "1.Khichdi" << endl;
        cout << "2.Sabzi" << endl;
        cout << "3.Sweet" << endl;
        cout << "Enter your choice: " << endl;
        cin >> gChoice;
        switch (gChoice)
        {
        case 1:
            cout << "You have selectd Khichdi:" << endl;
            cout << "1.Masala Khichdi(10)" << endl;
            cout << "2.Dal Khichdi(20)" << endl;
            cout << "3.Vegetable Khichdi(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> khichdiChoice;
            switch (khichdiChoice)
            {
            case 1:
                cout << "You have selected Masala Khichdi:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Dal Khichdi:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Vegetable Khichdi:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 2:
            cout << "You have selectd Sabzi:" << endl;
            cout << "1.Bhindi(10)" << endl;
            cout << "2.Jeera Aloo(20)" << endl;
            cout << "3.Sev Tameta(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> sabziChoice;
            switch (sabziChoice)
            {
            case 1:
                cout << "You have selected Bhindi:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Jeera Aloo:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Sev Tameta:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 3:
            cout << "You have selectd Sweet:" << endl;
            cout << "1.Gujab Jamun(10)" << endl;
            cout << "2.Mohanthal(20)" << endl;
            cout << "3.Halwa(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> sweetChoice;
            switch (sweetChoice)
            {
            case 1:
                cout << "You have selected Gulab Jamun:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Mohanthal:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Halwa:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
        }
        break;
    case 3:
        cout << "You have selected Punjabi food:" << endl;
        cout << "1.Sabzi" << endl;
        cout << "2.Dal" << endl;
        cout << "3.Naan" << endl;
        cout << "Enter your choice: " << endl;
        cin >> pChoice;
        switch (pChoice)
        {
        case 1:
            cout << "You have selectd Sabzi:" << endl;
            cout << "1.Palak Paneer(10)" << endl;
            cout << "2.Chole(20)" << endl;
            cout << "3.Paneer Kadai(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> spChoice;
            switch (spChoice)
            {
            case 1:
                cout << "You have selected Palak Paneer:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Chole:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Paneer Kadai:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 2:
            cout << "You have selectd Dal:" << endl;
            cout << "1.Dal Fry(10)" << endl;
            cout << "2.Dal Tadka(20)" << endl;
            cout << "3.Dal Makhni(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> dalChoice;
            switch (dalChoice)
            {
            case 1:
                cout << "You have selected Dal Fry:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Dal Tadka:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Dal Mankhni:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 3:
            cout << "You have selectd Naan:" << endl;
            cout << "1.Butter Naan(10)" << endl;
            cout << "2.Cheese Naan(20)" << endl;
            cout << "3.Stuffed Naan(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> naanChoice;
            switch (naanChoice)
            {
            case 1:
                cout << "You have selected Butter Naan:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Cheese Naan:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Stuffed Naan:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
        }
        break;
    case 4:
        cout << "You have selected Chinese food:" << endl;
        cout << "1.Soup" << endl;
        cout << "2.Noodles" << endl;
        cout << "3.Momos" << endl;
        cout << "Enter your choice: " << endl;
        cin >> cChoice;
        switch (cChoice)
        {
        case 1:
            cout << "You have selectd Soup:" << endl;
            cout << "1.Hot & Sour (10)" << endl;
            cout << "2.Chinese Vegetable(20)" << endl;
            cout << "3.Manchow(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> soupChoice;
            switch (soupChoice)
            {
            case 1:
                cout << "You have selected Hot & Sour:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Chinese Vegetable:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Manchow:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 2:
            cout << "You have selectd Noodles:" << endl;
            cout << "1.Hakka(10)" << endl;
            cout << "2.Manchurian Noodles(20)" << endl;
            cout << "3.Schezwan(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> noodlesChoice;
            switch (noodlesChoice)
            {
            case 1:
                cout << "You have selected Hakka:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Manchurian Noodles:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Schezwan:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 3:
            cout << "You have selectd Momos:" << endl;
            cout << "1.Fried(10)" << endl;
            cout << "2.Steamed(20)" << endl;
            cout << "3.Paneer Momos(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> momosChoice;
            switch (momosChoice)
            {
            case 1:
                cout << "You have selected Fried:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Steamed:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Paneer Momos:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
        }
        break;
    case 5:
        cout << "You have selected Fast food:" << endl;
        cout << "1.Sandwich" << endl;
        cout << "2.Burger" << endl;
        cout << "3.Pizza" << endl;
        cout << "Enter your choice: " << endl;
        cin >> fChoice;
        switch (fChoice)
        {
        case 1:
            cout << "You have selectd Sandwich:" << endl;
            cout << "1.Vegetable (10)" << endl;
            cout << "2.Aloo Matar(20)" << endl;
            cout << "3.Schezwan(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> swhChoice;
            switch (swhChoice)
            {
            case 1:
                cout << "You have selected Vegetable:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Aloo Matar:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Schezwan:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 2:
            cout << "You have selectd Burger:" << endl;
            cout << "1.Aloo Tikki(10)" << endl;
            cout << "2.American Cheese(20)" << endl;
            cout << "3.Veg Burger(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> noodlesChoice;
            switch (noodlesChoice)
            {
            case 1:
                cout << "You have selected Aloo Tikki:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected American Cheese:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Veg Burger:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
            break;
        case 3:
            cout << "You have selectd Pizza:" << endl;
            cout << "1.Margherita(10)" << endl;
            cout << "2.Peri Peri Paneer(20)" << endl;
            cout << "3.Farmhouse(30)" << endl;
            cout << "Enter your choice: " << endl;
            cin >> momosChoice;
            switch (momosChoice)
            {
            case 1:
                cout << "You have selected Margherita:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 10 << endl;
                break;
            case 2:
                cout << "You have selected Peri Peri Paneer:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 20 << endl;
                break;
            case 3:
                cout << "You have selected Farmhouse:" << endl;
                cout << "How many plates do you want? " << endl;
                cin >> plates;
                cout << "Your total bill is: " << plates * 30 << endl;
                break;
            default:
                cout << "Invalid choice!!!!" << endl;
                break;
            }
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
}