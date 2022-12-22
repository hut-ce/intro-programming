#include <iostream>

using namespace std;

int str_to_num(string str , int num[ ])
{
	int j = 0;
	int len = str.size();
	for( int i =  len - 1; i >= 0; i-- )
		num[ j++ ] =  str[ i ] - 48;
	
	return len;
}

int add_numbers( int n1[ ] , int size1 , int n2[ ] , int size2 , int n3[ ] )
{
	int i , carry = 0;
	
	for( i = 0; i < size1 || i < size2; i++ )
	{
		n3[ i ] = ( n1[ i ] + n2[ i ] + carry ) % 10;
		carry   = ( n1[ i ] + n2[ i ] + carry ) / 10;
	}
	if( carry != 0 )
		n3[ i ] = carry;
	
	int size = i;
	
	return size;
}

void print_result( int array[ ] , int size )
{
	for( int i = size - 1; i >= 0; i-- )
		cout << array[ i ];	
}

void display( int num[] , int size )
{
	for( int i = size - 1; i >= 0; i-- )
		cout << num[ i ];
}

int main(int argc, char** argv) {
	
	const int n = 20;
	string str;
	int number1[ n ] = { 0 }, number2[ n ] = { 0 } , number3[ n ] = { 0 };
	
	cout << "Enter first number: ";
	cin  >> str;
		
	int size1 = str_to_num( str , number1 );
	
	cout << "\nEnter second number: ";
	cin  >> str;
	
	int size2 = str_to_num( str , number2 );
	
	int size3 = add_numbers( number1 , size1 , number2 , size2 , number3 );
	
	display( number1 , size1 );
	cout << " + \n";
	display( number2 , size2 );
	cout << "\n--------------------\n";
		
	print_result( number3 , size3 );

	return 0;
}