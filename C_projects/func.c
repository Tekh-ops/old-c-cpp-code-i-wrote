#include <stdio.h>

int fact(int y);
int add(int y);
int addOrfactorial(int x,int y);

int main(int argc, char const *argv[])
{
    printf("Addition of numbers starting from 1 to 5 is %d\n",addOrfactorial(5,0));
    printf("Factorial of 5 is %d\n",addOrfactorial(5,1));
    return 0;
}

// if y is 0, it calculate addition of numbers starting from x to 1. If y is 1, it calculate factorial of x
int addOrfactorial(int x, int y)
{
    if (x == 1)
    {
        return 1;
    }
    else if (y == 0)
    {
        return add(x);
    }
    else if (y == 1)
    {
        return fact(x);
    }
    else{
        return -1;
    }
}

// add number starting from y to 1
int add(int y)
{
    return y + addOrfactorial((y - 1),0);
}

// calculate the factorial of y
int fact(int y)
{
    return y * addOrfactorial((y - 1),1);
}