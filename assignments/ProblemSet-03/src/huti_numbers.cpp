#include <iostream>
#include <cmath>

using namespace std;
int number_length(long long unsigned number) {
    int len = 0;
    while (number>0)
    {   
        number/=10;
        len++;
    }
    return len;
}
long long unsigned int huti_calc(long long unsigned n){

    short digit;
    long long unsigned huti = 0;
    int len = number_length(n);
    while (n>0)
    {
        digit = n%10;
        huti += pow(digit, len);
        n /= 10;
    }
    return huti;
}


long long unsigned interval(int n) {
    long long unsigned EndInterval = 0;
    int a[21];
    for (int i = 1; i <= n+1; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++)
        for (int j = i+1; j <= n; j++)
            EndInterval += a[i]*a[j];
    
    EndInterval = 2 * EndInterval;
    return EndInterval;
}

int main()
{   
    int n;
    cin >> n;
    long long unsigned EndInterval = interval(n);

    for (long long unsigned i = 100; i <= EndInterval; i++)
    {
        if(huti_calc(i)==i)
            cout << i << endl;
    }
    
    return 0;
}
