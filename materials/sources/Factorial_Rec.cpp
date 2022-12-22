#include <stdio.h>
#include <iostream>
#include <iomanip>

#define MAX_INT 17
using namespace std;



long factorial( long number ); /* function prototype */

/* function main begins program execution */
int main( void )
{
   int i; /* counter */

   /* loop 11 times; during each iteration, calculate
      factorial( i ) and display result */
   for ( i = 0; i < MAX_INT; i++ ) {
      cout << endl << setw ( 3 ) << i << "! = " 
	               << setw ( 12 ) << factorial( i );
   } /* end for */

   return 0; /* indicates successful termination */

} /* end main */

/* recursive definition of function factorial */
long factorial( long number )
{
   /* base case */
   if ( number <= 1 ) {
      return 1;
   } /* end if */
   else { /* recursive step */
      return ( number * factorial( number - 1 ) );
   } /* end else */

} /* end function factorial */


