#include <stdio.h>
#include <stdlib.h>


int employee;

struct Employee_details
{
    char* name;
    char* company;

}*emp;

void Display(char *,char *);

int main()
{
    int n, m;
    char choice;

    printf("*****Welcome to ABC pvt. limited *****\n");
    printf("*****Here you can enter your employee id details*****\n\nHow many Empolyee are there\n");
    scanf("%d",&employee);
    emp = (struct Employee_details *) calloc (employee,sizeof(struct Employee_details));

    do
    {

    printf("Enter the character size of your employee ID\n");
    scanf("%d", &n);
    emp->name = (char *) malloc ((n+1)*sizeof(char));

    printf("Enter your name :");
    scanf("%s",emp->name);

    printf("Enter the character size of your company name\n");
    scanf("%d",&m);
    emp->company = (char *) malloc ((m+1)* sizeof(char));

    printf("Enter the name of your company\n");
    scanf("%s",emp->company);

    Display(emp->name,emp->company);


    printf("If you don't want to add more employee details PRESS n\n");
    //scanf("%c",&choice);
    choice = getchar();

    } while ((choice != 'n'));


    return 0;
}

void Display(char *name,char *company)
{
    for (int i = 0; i < employee; i++)
    {
    printf("The %d employee name is :%s\n",i+1,(char)*(emp + i)->name);
    printf("The company name of %d employee is :%s\n",i+1,(char)*(emp + i)->company);
    }

}