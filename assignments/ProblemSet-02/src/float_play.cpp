#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float number;
    float min;
    float max;
    float sum = 0;
    int cnt = 1;
    cin >> number;
    min = number;
    max = number;
    sum += number;
    
    while (cnt < n){
        cin >> number;
        if (number < min){
            min = number;
        }
        if (number > max){
            max = number;
        }
        sum += number;
        cnt++;
    }
    
    cout << "Min: " << (int) (min*1000) / 1000.0 << endl;
    cout << "Max: " << (int) (max*1000) / 1000.0  << endl;
    cout << "Avg: " << (int) (sum/n*1000) / 1000.0  << endl;
    
    return 0;
}
