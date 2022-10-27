#include <iostream>
using namespace std;

int main() {
    int aquariumDavid = 8;
    int aquariumAlex = 11;

    // your code goes here
    int hold = aquariumDavid;
    aquariumDavid = aquariumAlex;
    aquariumAlex = hold;
    
    cout << "David's aquarium: " << aquariumDavid << endl;
    cout << "Alex's aquarium: " << aquariumAlex;
    return 0;
}