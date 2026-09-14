/* Q37: Write a program to find the LCM of two numbers. */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int num1 = a, num2 = b;

    // First find HCF (GCD) using Euclidean algorithm
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    int gcd = num1;

    // LCM(a, b) = (a * b) / GCD(a, b)
    int lcm = (a / gcd) * b;

    printf("%d\n", lcm);

    return 0;
}