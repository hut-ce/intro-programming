#include <iostream>
#include <iomanip>



using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int n = 1;	
	
	while ( n ){
		
		int f1 = 0;
		int f2 = 1;

		
		cout << "\nEnter N (Nth series of fibbonachi . . . ): ";
		cin  >> n;
		
		int w = 5;
		cout <<  f1 << endl << f2 << endl;
		
		while ( true ){
			 
			int f3 = f1 + f2;
			
			if ( f3 <= n ){
				cout  << f3 << endl;
			}
			else
				break;
			
			f1 = f2;
			f2 = f3;
			
		}	
	}
	
	return 0;
}
