/* this program is to take in input of drivers and display in a beautiful fasion */

#include <stdio.h>

struct Travel_Agency
{
    char name[20] , license_id[20] , route[20];
    unsigned int kms;
}driver;

int main()
{
    struct Travel_Agency driver[4];
    printf("\n**********Welcome to the TRAVEL AGENCY please ender your details**********\n\n");

    for (int i = 0; i <= 3; i++)
    {
       printf("Enter your name");
       gets(driver[i].name);
    }
    return 0;
}