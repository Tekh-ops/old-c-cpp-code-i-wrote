#include <stdio.h>

#ifndef HEADER_FILE
#define HEADER_FILE

struct style
{
    char ch;
    int type;
    double size;
};

#endif

void fun(struct style *test)
{
    printf("%c\n %d\n %0.3f\n", test->ch, test->type, test->size);
    printf(__TIME__);
}

int main(int argc, char const *argv[])
{
    struct style data = {'A', 23, 89.3};
    fun(&data);
    return 0;
}

/*


#include <stdio.h>
#include "header/arithmetic.h"
#include "header/print.h"

int main(int argc, char const *argv[])
{
    Arithematics(add, 3, 4);
    printf("The String :%s\n", str(Fortnite));
    message(Ayush, Tiwari);
    return 0;
}

*/
