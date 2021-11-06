#include<stdio.h>
    #define DEBUG
int main()
{
    #ifdef DEBUG
        printf("Testing,testing 1,2,3");
    #else
        printf("Mission failed, we will get it next time");
    #endif
    
    return 0;
}