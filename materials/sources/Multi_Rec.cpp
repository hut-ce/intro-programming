/* What does this program do? */
#include <iostream>

using namespace std;

int Mul_Rec( int a, int b ); /* function prototype */
 
/* function main begins program execution */  
int main( void )
{
   int x; /* first integer */
   int y; /* second integer */
   
   cout << "Enter two integers: ";
   cin >> x >> y;

   cout << "The result is " << Mul_Rec( x, y ) << "\n";
   
   return 0; /* indicates successful termination */

} /* end main */

/* Parameter b must be a positive integer 
   to prevent infinite recursion */
int Mul_Rec( int a, int b )
{
   /* base case */
   if ( b == 1 ) {
      return a;
   } /* end if */
   else { /* recursive step */
      return a + Mul_Rec( a, b - 1 );
   } /* end else */
   
} /* end function Mul_Rec */

