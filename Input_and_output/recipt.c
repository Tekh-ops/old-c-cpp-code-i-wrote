#include <stdio.h>

int main()
{
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry
    // {{item}}   - Table Fan
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same

    FILE *ptr;
    char name[10], item[10], outlet[10];
    printf("Please enter your name:");
    gets(name);
    printf("Enter the item you want:");
    gets(item);
    printf("Enter the name of the outlet:");
    gets(outlet);

    ptr = fopen("letter.txt","w");
    fprintf(ptr,"Thanks %s for purchasing %s from our outlet %s.\nPlease visit our outlet: %s for any kind of problems. We plan to server you again soon.",name,item,outlet,outlet);
    fclose(ptr);

    return 0;
}
