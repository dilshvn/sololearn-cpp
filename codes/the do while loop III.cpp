#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0;
    double price;
    double discount;
    int i;
    do {
        cin >> price;
        discount = 0.15*price;
        cout << discount << endl;
        i++;
    } while (i < 3);
    return 0;
}