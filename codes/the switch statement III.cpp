#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    cin >> choice;
    switch (choice) {
        case 1: 
            cout << "Latte";
            break;
        case 2:
            cout << "Americano";
            break;
        case 3:
            cout << "Espresso";
            break;
        case 4:
            cout << "Cappuccino";
            break;
        default:
            cout << "Macchiato";
    }
    return 0;
}