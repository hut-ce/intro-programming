#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool t = false;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a*a == (b*b + c*c)){
        t = true;
        //cout << t;
    } else if (b*b == (a*a + c*c)) {
        t = true;
        //cout << t;
    } else if (c*c == (a*a + b*b)) {
        t = true;
        //cout << t;
    }
    cout << ((t)?"YES":"NO");
    return 0;
}
