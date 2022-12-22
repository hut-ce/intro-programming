#include <iostream>

using namespace std;

int Power(int , int );
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
   int a, n;

   cout << "Enter two positive integers: ";
   cin  >> a >> n;

   cout << a << " power " << n << " = " << Power(a , n);

	return 0;
}

int Power(int a , int n)
{
	if ( n == 0 )
		return 1;
		
	int res = a * Power(a , n - 1);
	return ( res );
}
