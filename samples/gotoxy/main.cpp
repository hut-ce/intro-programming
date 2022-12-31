#include <cstdio>
#include <cstdlib>

void gotoxy(int x,int y)
{

    printf("%c[%d;%df",0x1B,y,x);
}

int main(void)
{
    char word[] = {'H','e', 'l', 'l', 'o', 'W','o','r','l','d','!'};
    
    system("clear");
    
    int size = sizeof(word)/sizeof(char);
    
    for (int i = 0; i < size; i++) {
        
        for (int i = 0; i < size; i++) {
            
            printf("%c", '+');

        }

            printf("%c", '\n');
    }
    
    int c = 0;
    for (c = 0; c < size; c++) {
        gotoxy(c+1, c+1);
        printf("%c", word[c]);
    }    
    printf("%c", '\n');
    
    return 0;
} 
