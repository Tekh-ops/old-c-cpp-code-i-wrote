#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char generateRandomNumber()
{
    int n;
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    n = rand() % 100;
    if ((n > 0) && (n <= 33))
    {
        return 'r';
    }
    else if ((n > 33) && (n <= 66))
    {
        return 'p';
    }
    else
        return 's';
}

int main()
{

    printf("%c\n" ,generateRandomNumber());
    return 0;
}