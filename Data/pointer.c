#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 3;
    int *ptr = (int *)calloc(4, sizeof(int));

    //printf("pointer: %d\n", *((int *)ptr));

    ptr[4] = 23;

    for (int i = 0; i < sizeof(ptr); i++)
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);

    return 0;
}
