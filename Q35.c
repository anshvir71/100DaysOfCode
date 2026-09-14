/* Q35: Write a program to print all factors of a given number. */

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int first = 1;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            if (first) {
                printf("%d", i);
                first = 0;
            } else {
                printf(" %d", i);
            }
        }
    }
    printf("\n");

    return 0;
}