/* Q38: Write a program to find the sum of digits of a number. */

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("%d\n", sum);

    return 0;
}