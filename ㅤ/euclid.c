#include <stdio.h>
#include <stdlib.h>

void number_choice(int, int);

int main()
{
    int num1, num2, *ptr, numbers;

    printf("\n\nC program to calculate HCF using Eulcid Division Algorithm\nEnter two or more number for performing HCF on them\n");
    //scanf("%d", &numbers);

    //ptr = (int *)malloc(numbers * sizeof(int));
    //scanf("%d %d\n", *ptr, *(ptr + 1));
    //printf("%d %d", *ptr, *(ptr + 1));
    scanf("%d %d", &num1, &num2);
    number_choice(num1, num2);
    //printf("The num1 : %d and num2 : %d", *ptr, num2);

    return 0;
}

void number_choice(int number_1, int number_2)
{

    if (number_1 > number_2)
    {
        printf("number_1 / number_2 : %d\n", number_1 / number_2);
    }
}