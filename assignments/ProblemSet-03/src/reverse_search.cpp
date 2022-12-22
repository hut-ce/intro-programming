#include <iostream>

using namespace std;

#define LENGTH 3000

char* string_reverse( char* s )
{
    char  c;
    char* s0 = s - 1;
    char* s1 = s;

    /* find the end of the string */
    while (*s1) 
        ++s1;

    /* reverse string */
    while (s1-- > ++s0) {
        c   = *s0;
        *s0 = *s1;
        *s1 =  c;
    }
    return s;
}
int wordCounter(char* str)
{   
    for (i = 0;s[i] != '\0';i++)
    {   
        
        if (s[i] == ' ' && s[i+1] != ' ')
            char* word;
        else
            *word = s[i]
        
    }
}
int main()
{       
    char message[] = "Hello world!";

    cout << "message = " << message << endl;
    cout << "egassem = " << string_reverse(message) << endl;
    return 0;
}
