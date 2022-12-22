#include <iostream>

using namespace std;

int main()
{
    
    int a, b;
    cin >> a;
    cin >> b;
    
    if (b > a) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    for (int i = 2; i <= a; i++) {
        if (b%i == a%i) {
            cout << i;
            if (i != a)
               cout << " ";
        }
    }
    
    return 0;
}
