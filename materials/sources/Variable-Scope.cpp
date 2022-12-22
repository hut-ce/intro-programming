
#include <iostream>

using namespace std;

void useLocal( void );       /* function prototype */
void useStaticLocal( void ); /* function prototype */
void useGlobal( void );      /* function prototype */

int x = 1; /* global variable */

int main( void )
{
   int x = 5; /* local variable to main */

   cout << "local x in outer scope of main is " << x << endl;

   { 
      int x = 7; 

      cout << "local x in inner scope of main is " << x << endl;
   } 

   cout << "local x in outer scope of main is " << x << endl;

   useLocal();       
   useStaticLocal(); 
   useGlobal();      
   useLocal();       
   useStaticLocal(); 
   useGlobal();      

   cout << "\nlocal x in main is " << x << endl;
   
   return 0; 

} 

void useLocal( void )
{
   int x = 25;  

   cout << "\nlocal x in useLocal is " << x << " after entering useLocal\n";
   x++;
   cout << "local x in useLocal is " << x << " before exiting useLocal\n";
} 

void useStaticLocal( void )
{
   /* initialized only first time useStaticLocal is called */
   static int x = 50;  

   cout << "\nlocal static x is " << x << " on entering useStaticLocal\n";
   x++;
   cout << "local static x is " << x << " on exiting useStaticLocal\n";
} 

/* function useGlobal modifies global variable x during each call */
void useGlobal( void )
{
   cout << "\nglobal x is " << x << " on entering useGlobal\n";
   x *= 10;
   cout << "global x is " << x << " on exiting useGlobal\n";
} /* end function useGlobal */

