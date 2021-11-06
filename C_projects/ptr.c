// passing function to a variable in main function

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning\n");
}

int main()
{
    int (*ptr) (int, int);
    ptr = sum;
    int num = (*ptr) (1,2);
    printf("function ptr: %d\n",num);
    return 0;
}