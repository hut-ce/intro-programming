#include <iostream>

using namespace std;

void mul(int, int, int& );

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a, b, result;
	
	cout << "Enter a and b: ";
	cin  >> a >> b;
	
	mul(a, b, result);
	
	cout << "\n\nResult is: " << result;
	
	return 0;
}

void mul(int m, int n, int& r)
{
	r = m * n;
}
