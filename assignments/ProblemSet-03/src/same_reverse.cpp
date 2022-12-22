#include <iostream>

using namespace std;


int main()
{
    long long unsigned n;
    
    short digits[20];

    cin >> n;
    int count = 0;

    while (n>0)
    {
        digits[count++] = n%10;
        n /= 10;
    }
    bool is_same_reverse = true;
    for (int i = 0; i <= count/2; i++)
    {   
        if (digits[i]!=digits[count-i-1])
        {
            is_same_reverse = false;
            break;
        }        
    }
    cout << ((is_same_reverse)? "YES": "NO");
    return 0;
}
