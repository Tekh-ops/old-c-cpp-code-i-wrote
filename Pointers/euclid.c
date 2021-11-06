/* This program calculate area of circle with the help of euclidian distance formulae */
#define PI 3.141

#include <stdio.h>
#include <math.h>

float euclidianDistance(int, int, int, int);
float circleArea(float);

int main()
{
    int x1, x2, y1, y2;
    float radius, area;

    printf("Enter the x1,x2,y1,y2 co-ordinates for calculating area of circle\n");
    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter y2: ");
    scanf("%d", &y2);

    radius = euclidianDistance(x1, x2, y1, y2);
    area = circleArea(radius);

    printf("The co-ordinates which form the radius and the area of circle is %0.2f", area);

    return 0;
}

float euclidianDistance(int x1, int x2, int y1, int y2)
{
    int dist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return sqrt(dist);
}

float circleArea(float r)
{
    int area = PI * r * r;
    return area;
}