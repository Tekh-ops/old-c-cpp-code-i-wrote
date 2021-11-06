#include<stdio.h>
int main()
{
    char input[20];
    int index;
    
    printf("Enter the string value\n");
    gets(input);

    for(index=0;input[index] !='\0';index++)
    {
        printf("%c",input[index]);
        printf("\n");
    }
    printf("Done!\n");
    return 0;
}