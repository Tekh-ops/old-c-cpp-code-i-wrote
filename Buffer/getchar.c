#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ch;
    ch = (char *) malloc (4*sizeof(char));
    ch = getchar();
    printf("The character entered is: %s\n" ,ch);
    return 0;
}