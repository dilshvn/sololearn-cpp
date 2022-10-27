#include <iostream>
using namespace std;

int main()
{
    int mark = 100;

    if (mark >= 50) {
        cout << "You passed." << endl;
        if (mark == 100) {
            cout <<"Perfect!" << endl;
        }
    }
    else {
        cout << "You failed." << endl;
    }

    return 0;
}