#include<stdio.h>
#include<conio.h>
#include"data.h"

int main()
{
    web.datah.name = '1';
    printf("%c\n" , web.datah.name);

    web.datah.i = 123;
    printf("%d\n" , web.datah.i);

    web.datah.decimal = 12.3;
    printf("%0.3f\n" , web.datah.decimal);
    getch();
    return 0;
}
