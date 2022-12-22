#include <iostream>

using namespace std;

long double myPow(long double base, unsigned int exp) {
    if(!exp)
        return 1.0;
    return myPow(base, exp-1) * base ;
}
int main()
{
    unsigned int exp;
    long double base;

    cin >> base;
    cin >> exp;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    cout << myPow(base, exp);
    return 0;
}
