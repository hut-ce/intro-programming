#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;

    long int number = 1;

    for (int i = 2; i <= n/2; i++)
    {
        number += (n%i == 0)? i : 0;
    }
    
    cout << ((number == n)? "YES" : "NO");
    return 0;
}
