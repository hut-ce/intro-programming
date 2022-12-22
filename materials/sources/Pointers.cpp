// Fig. 8.4: fig08_04.cpp
// Using the & and * operators.
#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;

int main()
{
   int a; // a is an integer
   int *aPtr; // aPtr is an int * -- pointer to an integer

   a = 7; // assigned 7 to a
   aPtr = &a; // assign the address of a to aPtr

   cout << "The address of a is " << &a
        << "\nThe value of aPtr is " << aPtr;
   getch();
   
   a++;
   cout << endl << a << endl;
   
   *aPtr = 9;
   cout << a << endl;
   
   cout << "\n\nThe value of a is " << a
        << "\nThe value of *aPtr is " << *aPtr;
   getch();        
        
   cout << "\n\nShowing that * and & are inverses of "
        << "each other.\n&*aPtr = " << &*aPtr
        << "\n*&aPtr = " << *&aPtr  << endl;
   getch();   
   
   cout << "\nAddress of aPtr " << &aPtr << endl << endl;
   getch();
   
   char name[ 20 ] = "Ali Reza Mohammadi";
   char *ptr = &name[ 4 ];
	
   cout << ptr;
   cout << endl << name;
   name[ 8 ] = '\0';
   cout << endl << &name[ 4 ] << endl;
   cout << endl<< *ptr;
 
   return 0; // indicates successful termination
} // end main
