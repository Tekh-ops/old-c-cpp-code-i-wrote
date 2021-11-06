#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...) {
    int sum = 0;
    va_list ap;

    va_start(ap, num);

    for (int i = 0; i < num; i++)
        sum += va_arg(ap, int);

    va_end(ap);
    return sum;
}

int main() {
    printf("%d\n", sum(3, 1, 2, 3));
    printf("%d\n", sum(2, 1, 2));
    printf("%d\n", sum(1, 1));
    printf("%d\n", sum(0));
    return 0;
}
