#include <stdio.h>

int Ispalidrome(int num);

int main(int argc, char const *argv[])
{
    
    int num;
    printf("Enter the number to check is it palidrome or not\n");
    scanf("%d",&num);

    if (Ispalidrome(num))
    {
        printf("The number is palidrome\n");
    }
    else 
    {
        printf("The number is not palidrome\n");
    }

    return 0;
}

int Ispalidrome(int num)
{
    
    printf("the reversed number :%d\n",reverse);

    return 0;
}