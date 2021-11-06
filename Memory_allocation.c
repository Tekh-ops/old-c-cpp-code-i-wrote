#include<stdio.h>
#include<stdlib.h>  

int main()
{
    int* ptr;
    ptr = (int*) calloc (2,sizeof(int));
    *ptr = 123;
    *(ptr + 1) = 234;
    printf("The value allocated in heap is :%d\n" ,*ptr);
    printf("The value allocated in heap is :%d\n" ,*(ptr + 1));
    free(ptr);
    return 0;
}