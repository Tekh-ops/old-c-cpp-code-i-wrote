#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);

    if (strcmp(argv[0], "addition") == 0)
    {
        printf("The addition of %0.3f and %0.3f is: %0.3f", num1, num2, num1 + num2);
    }
    else if (strcmp(argv[0], "subraction") == 0)
    {
        printf("The subraction of %0.3f and %0.3f is: %0.3f", num1, num2, num1 - num2);
    }
    else if (strcmp(argv[0], "multiplication") == 0)
    {
        printf("The multiplication of %0.3f and %0.3f is: %0.3f", num1, num2, num1 * num2);
    }
    else if (strcmp(argv[0], "division") == 0)
    {
        printf("The division of %0.3f and %0.3f is: %0.3f", num1, num2, num1 / num2);
    }
    return 0;
}
