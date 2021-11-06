#include <stdio.h>

enum bool
{
    True,
    False
} var;

struct data
{
    char name[10];
    int passwd;
} Char;

int main(int argc, char const *argv[])
{
    printf("\n\tSTART\n");
    scanf("%s %d", Char.name, Char.passwd);

    return 0;
}
