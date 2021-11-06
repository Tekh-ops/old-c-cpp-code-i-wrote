#include<stdio.h>
#include<string.h>
// #include<conio.h>
#include <curses.h>
    
int main(int argc, char const *argv[])
{
    char string[6] = {'A','y','u','s','h','\0'};
    printf("Hello,World!\n");

    for (int i = 0; i < 6; i++)
    {
    printf("%c",string[i]);
    }
    getch();
    return 0;
}
