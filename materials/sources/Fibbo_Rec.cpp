/* Recursive fibonacci function */
#include <iostream>
#include <stdio.h>

using namespace std;

long fibonacci( long n ); /* function prototype */

/* function main begins program execution */
int main( void )
{
   long result; /* fibonacci value */
   long number; /* number input by user */

   /* obtain integer from user */
   cout << "Enter an integer: ";
   cin >> number;

   /* calculate fibonacci value for number input by user */
   result = fibonacci( number );

   /* display result */
   cout << "Fibonacci( " << number << " ) = " << result << endl;
   
   return 0; /* indicates successful termination */

} /* end main */

/* Recursive definition of function fibonacci */
long fibonacci( long n )
{
   /* base case */
   if ( n == 0 || n == 1 ) {
      return n;
   } /* end if */
   else { /* recursive step */ 
      return fibonacci( n - 1 ) + fibonacci( n - 2 );
   } /* end else */
   
} /* end function fibonacci */

