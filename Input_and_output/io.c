#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    FILE *file_pointer;
    char filename[11];

    printf("What file do you want to check\n");
    scanf("%s",&filename);

    if ((file_pointer = fopen (filename , "r")) == NULL)
    {
        printf("%s does not exist\n" ,filename);
    }
    else{
        printf("%s exists\n",filename);
    }
    fclose(file_pointer);
    getch();
}