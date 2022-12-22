#include <iostream>

using namespace std;

int main()
{
    
    float a, b;
    cin >> a;
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "infinite";
        } else {
            cout << "invalid";
        }
    } else {
        cout << "unique";
    } 

    return 0;
}