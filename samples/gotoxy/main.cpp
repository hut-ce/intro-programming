#include <cstdio>
#include <cstdlib>

void gotoxy(int x,int y)
{

    printf("%c[%d;%df",0x1B,y,x);
    printf("%c[%d;%df",0x033,y,x);
}

int main(void)
{

    gotoxy(20,10);
    printf("hello world");
    return 0;
} 
