/* This is a practice C program for Employee Management 
Creating started on : 29/11/2020 */

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char *name;
    int employee_id[10];
    int phone_no[10];
};

int main(int argc, char const *argv[])
{
    struct employee emp1;
    FILE *ptr;

    printf("\n\t\tWELCOME TO SCIFI NAUT CORP.\n");
    printf("1.New Employees register themselves\n");
    printf("")
        printf("Please ENTER your NAME : ");
    emp1.name = (char *)malloc(10 * sizeof(char));

    if (emp1.name == NULL)
    {
        printf("Memory Not allocated\n");
    }
    else
    {
        scanf("%s", emp1.name); //[^\n] //*emp1.name = getchar();
    }

    printf("Enter your Employee ID\n");
    scanf("%d", &emp1.employee_id);
    printf("%d\n", *(emp1.employee_id));

    printf("Enter your Phone Number\n");
    scanf("%d", &emp1.phone_no);
    printf("%d\n", *(emp1.phone_no));

    ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s %d %d\n", emp1.name, *(emp1.employee_id), *(emp1.phone_no));

    free(emp1.name);
    fclose(ptr);

    return 0;
}
