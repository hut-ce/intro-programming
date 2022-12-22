#include <iostream>

using namespace std;

int main( ) {
	
	while( true ){
		int num;
		
		cout << "Enter a number (zero to exit): ";
		cin  >> num;
		
		if( num == 0 )
			break;
		
		bool flag    = true;
		int  divisor = 2;
		
		while( divisor <= (num / 2) )
		{
			int rem = num % divisor;
			if( rem == 0 ){
				cout << num << " is NOT a prime number." << endl << endl;
				flag = false;
				break;
			}
			
			divisor++;
		}
		
		if( flag )
			cout << num << " is a prime number." << endl << endl;
    }
    
    cout << "See you later. bye bye." << endl;
	 
	return 0;
}