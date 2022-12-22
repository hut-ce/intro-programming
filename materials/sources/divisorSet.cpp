#include <iostream>

using namespace std;

int main( ) {
	
	while( true ){
		
		int num;
		
		cout << "Enter a number (0 to exit): ";
		cin  >> num;
		
		if( !num )
			break;
		
		cout << num << " = {1";
		
		int sumofdivisors = 1;
		int divisor = 2;
		
		while( divisor <= (num /2 ) ){
			int rem = num % divisor;
			
			if( rem == 0 ){
				cout << " , " << divisor;
				sumofdivisors = sumofdivisors + divisor;    //sumofdivisors += divisor          
		    }
		    
			divisor++;
		}
		
		if( num == 1 )
			cout << "}\n";
		else{	
			cout << " , " << num << "}\n";
			sumofdivisors += num;
		}
		
		cout << "Sum of divisors is: " << sumofdivisors << endl << endl;
	}
	
	return 0;
}