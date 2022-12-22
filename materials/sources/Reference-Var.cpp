#include <iostream>

// https://www.tutorialspoint.com/cplusplus/
 
using namespace std;
 
int main () {
   // declare simple variables
   int    i;
   double d;
   
   int* ptr_i;
   double* ptr_d;
 
   // declare reference variables
   int&    ref_i = i;
   double& ref_d = d;
   
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << ref_i  << endl;
 
   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << ref_d << endl;
   
   ptr_i = &i;
   ptr_d = &d;
   
   cout << "Pointer of i : " << ptr_i << endl;
   cout << "Pointer of d : " << ptr_d << endl;
   
   cout << "Content of memory that ptri points : " << *ptr_i << endl;
   cout << "Content of memory that ptrd points : " << *ptr_d << endl;
   
   cout << "Address of ptri : " << &ptr_i << endl;
   cout << "Address of ptrd : " << &ptr_d << endl;
      
   
   return 0;
}
