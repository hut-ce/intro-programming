#include <iostream>

using namespace std;
//
//int main () {
//
//    long int n, m, gcd, hcf;
//
//    cin >> n >> m;
//    hcf = n * m;
//
//    long int cnt = 1;
//
//    while ( cnt <= n && cnt <= m ) {
//        if ( n % cnt == 0 && m % cnt == 0 ) {
//            gcd = cnt;
//        }
//        cnt++;
//    }
//    hcf = hcf / gcd;
//    cout << gcd << " " << hcf;
//}


int main () {

    long int n, m, gcd, hcf;

    cin >> n >> m;
    hcf = n * m;

    if (n < m) {
        long int tmp;
        tmp = n;
        n = m;
        m = tmp;
    }
    gcd = m;
    while ( gcd > 0 ) {
        gcd = n % m;
        n = m;
        m = gcd;
    }
    gcd = n;
    hcf = hcf / gcd;
    cout << gcd << " " << hcf;
}