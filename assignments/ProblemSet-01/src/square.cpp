#include <iostream>

using namespace std;

int main() {

    long long int target;
    long long unsigned int power = 1;
    cin >> target;
    
    while (power <= target) {
        power = power << 1 ;
    }

    cout << power;    

}