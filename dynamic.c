#include<stdio.h>

struct waste
{
    char name[10];
    float a,b,c,d,e;
}gg;

int main()
{
    printf("Size of %d\n" ,sizeof(gg));
    return 0;
}