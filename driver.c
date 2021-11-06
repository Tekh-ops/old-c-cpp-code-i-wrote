#include <stdio.h>
#include <stdlib.h>

int fun()
{
    int num1, num2;
    printf("\nType Your number\n");
    scanf("%d %d", &num1, &num2);
    return num2, num1;
}

int main()
{
    printf("%d %d", fun());
    FILE *ptr = (int *)malloc(4 * sizeof(int));
    return 0;
}