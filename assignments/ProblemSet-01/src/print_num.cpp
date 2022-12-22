#include <iostream>

using namespace std;

int main ( ){
    unsigned long int n;
    unsigned long int number = 0;

    cin >> n;
    int zeros = 0;
    bool haszero = true;
    /** reverse the number*/
    while ( n > 0 ){
        if (n % 10 == 0 && haszero) {
            zeros++;
        } else {
            haszero = false;
        }
        number = number * 10 + (n % 10);
        n /= 10;
    }

    /** print structure */
    int digit ;

    do {

        digit = number % 10;
        cout << digit << ": ";
        for (int i = 0; i < digit; i++) {
            cout << digit;
        }
        number = number / 10;
        cout << endl;
    } while (number);
    for (int i = 0; i < zeros; ++i) {
        cout << "0: " << endl;
    }
}
