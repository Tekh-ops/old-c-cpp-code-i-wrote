#include<stdio.h>
#include<conio.h>
int main(void)
{
    float a;
    float b;
    float c;
    float d;

    printf("Enter your Physics Marks\n:");
    scanf("%f", &a);
    if (a >= 90 && 100 > a)
    {
        printf("Congrats!: A Grade\n");
    }
    else if (a >= 80 && 90 > a)
    {
        printf("Done well: B Grade\n");
    }
    else if (a >= 70 && 80 > a)
    {
        printf("Good: C Grade\n");
    }
    else if (a >= 60 && 70 > a)
    {
        printf("Bad: D Grade\n");
    }
    else if (a >= 50 && 60 > a)
    {
        printf("Need Improvement: E Grade\n");
    }
    else if (50 > a)
    {
        printf("Fail\n");
    }
    else 
    {
        printf("Not Valid\n");
    }

    printf("Enter your Mathematics Marks\n:");
    scanf("%f", &b);
    if (b >= 90 && 100 > b)
    {
        printf("Congrats!: A Grade\n");
    }
    else if (b >= 80 && 90 > b)
    {
        printf("Done well: B Grade\n");
    }
    else if (b >= 70 && 80 > b)
    {
        printf("Good: C Grade\n");
    }
    else if (b >= 60 && 70 > b)
    {
        printf("Bad: D Grade\n");
    }
    else if (b >= 50 && 60 > b)
    {
        printf("Need Improvement: E Grade\n");
    }
    else if (50 > b)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Not Valid\n");
    }

    printf("Enter your Chemistry Marks\n:");
    scanf("%f", &c);
    if (c >= 90 && 100 > a)
    {
        printf("Congrats!: A Grade\n");
    }
    else if (c >= 80 && 90 > c)
    {
        printf("Done well: B Grade\n");
    }
    else if (c >= 70 && 80 > c)
    {
        printf("Good: C Grade\n");
    }
    else if (c >= 60 && 70 > c)
    {
        printf("Bad: D Grade\n");
    }
    else if (c >= 50 && 60 > c)
    {
        printf("Need Improvement: E Grade\n");
    }
    else if (50 > c)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Not Valid\n");
    }

    d = (a + b + c) / 3;
    printf("******************\nThe average of PCM is:%f\n******************\n", d);
    if (d >= 90.000 && 100.000 > d)
    {
        printf("You are Passed\n");
    }
    else if (d >= 80.000 && 90.000 > d)
    {
        printf("You are Passed \n");
    }
    else if (d >= 70.000 && 80.000 > d)
    {
        printf("You are Passed\n");
    }
    else if (d >= 60.000 && 70.000 > d)
    {
        printf("You are Passed\n");
    }
    else if (d >= 50.000 && 60.000 > d)
    {
        printf("You are Passed\n");
    }
    else if (50.000 > d && 100.000> b)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Not Valid\n");
    }
    return 0;
}