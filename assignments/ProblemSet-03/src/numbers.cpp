#include <iostream>

#define SIZE 20
using namespace std;
int main()
{   
    int n;
    short a[SIZE];

    int EndInterval = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (short i = 1; i <= n; i++)
        for (short j = i+1; j <= n; j++)
            EndInterval += a[i-1]*a[j-1];
    
    EndInterval = 2 * EndInterval;
    
    cout << EndInterval <<endl;
    int number = 0;
    int digits = 0;
    int digit;
    for (int i = 100 ; i <= EndInterval; i++)
    {   
        number = i;
        digits = 0;
        while (number > 0)
        {   digit = number % 10;
            digits += digit * digit * digit;
            number /= 10; 
        }
        if (digits == i)
            cout << digits << endl;
    }
    
    return 0;
}
