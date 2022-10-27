#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int num;
    int ans;
    cin >> num;
    if (num <= 50){
    	ans = 50 - num;
    }
    else {
    	ans = 50 - num%50;
    }
    cout << ans;
    
    return 0;
}