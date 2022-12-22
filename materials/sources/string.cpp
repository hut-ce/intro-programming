#include <iostream>
#include <cstring>

#define SIZE 10

using namespace std;

int main () {
   char str1[ SIZE ] = "Hello"; 
    // = {'H','e','l','l','o','\0'}.   char str1[SIZE];    strcpy(str1,"Hello")
   char str2[ SIZE ] = "World";
   char str3[ SIZE ];
   int  len;

   // copy str1 into str3  , str3 = str1
   strcpy( str3, str1);
   cout << "strcpy( str3, str1): " << str3 << endl;

   // concatenates str1 and str2
   strcat(str1 , " ");
   strcat(str1 , str2);
   cout << "strcat( str1 , str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   
   len = strlen(str1);
   cout << "strlen( str1 ): " << len << endl << endl;
   
   string str1Str = "Hello";
   string str2Str = "World";
   string str3Str;

   // copy str1 into str3
   str3Str = str1Str;
   cout << "str3String: " << str3Str << endl;

   // concatenates str1 and str2
   str3Str = str1Str + " " + str2Str;
   cout << "str1Str + str2Str: " << str3Str << endl;
   str3Str[ 6 ] = 'M';
   
   cout << str3Str << endl;

   // total lenghth of str3 after concatenation
   len = str3Str.size();
   cout << "str3-string.size() :  " << len << endl;

   return 0;
}
