#include <stdio.h>

int main()
{
    void *ptr;
    int x = 2, y = 3;

    ptr = &x;
    printf("The value of X : %d\n", *(int *)ptr); // with typecasted pointer

    ptr = &y;
    //printf("The value of Y : %d\n",*ptr); // without typecasted pointer

    return 0;
}

/* Always typecaste void pointer */