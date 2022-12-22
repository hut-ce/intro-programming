#include <iostream>

using namespace std;

int main()
{
    
    long int n; // amount of money
    
    long int x; // number of dirham 
    long int y; // number of euro
    long int z; // number of dollar

    long int a; // dirham to rial
    long int b; // euro to rial
    long int c; // dollar to rial

    cin >> n;

    cin >> x;
    cin >> y;
    cin >> z;

    cin >> a;
    cin >> b;
    cin >> c;

    int cnt = 0; // number of ways
    long int xa = x * a;
    long int yb = y * b;
    long int zc = z * c;

    for (int xx = 0; xx <= x*a ; xx += e){

        if (xx == n) {
            cnt++;
            break;
        } else if (xx > n)
            break;
        for (int yy = 0; yy <= y*b ; yy+=b) {
            if (xx + yy == n) {
                cnt++;
                break;;
            } else if (xx + yy > n)
                break;
            for (int zz = 0; zz <= z*c ; zz+=c) {
                if (xx + yy + zz == n) {
                    cnt++;
                    break;
                } else if (xx + yy + zz > n)
                    break;
            }

        }
    }
    cout << cnt;

    return 0;
}