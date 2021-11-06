#include<stdio.h>
    
typedef struct student
{
    char name[20];
    int id;
    int marks;
}std;


int main()
{
    std school = {"Ayush",12,100};
    printf("The name of the student is %s\n",school.name);
    printf("The id of the student is %d\n",school.id);
    printf("The marks of the student is %d\n",school.marks);
    printf("\a");

    return 0;
}