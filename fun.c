#include <stdio.h>

struct fun
{
    char ch;
    int num;
    float data;
};

void func(struct fun *type)
{
    printf("%c\n%d\n%f\n", type->ch, type->num, type->data);
}

int main(int argc, char const *argv[])
{
    struct fun var;
    var.ch = 'A';
    var.num = 5;
    var.data = 6.7;

    func(&var);

    return 0;
}
