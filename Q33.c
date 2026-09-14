/* Q33: Write a program to check if a number is an Armstrong number. */

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, temp, count = 0;
    double sum = 0;

    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)round(sum) == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}