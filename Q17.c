/* Q17: Write a program to find the roots of a quadratic equation and categorize them. */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double d = (b * b) - (4 * a * c);

    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %g, %g\n", root1, root2);
    } else if (d == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and same: %g\n", root);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}