#include <iostream>
using namespace std;

int main()
{
    int mark = 90;

    if (mark < 50) {
        cout << "You failed." << endl;
        cout << "Sorry" << endl;
    }
    else {
        cout << "Congratulations!" << endl;
        cout << "You passed." << endl;
        cout << "You are awesome!" << endl;
    }

    return 0;
}