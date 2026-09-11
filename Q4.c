/* Q4: Write a program to calculate the area and circumference of a circle given its radius. */

#include <stdio.h>

int main()
{
    double r;
    const double PI = 3.141592653589793;

    scanf("%lf", &r);

    double area = PI * r * r;
    double circumference = 2 * PI * r;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}