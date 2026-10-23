/* Q55: Write a program to print all the prime numbers from 1 to n. */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int first = 1;

    for (int i = 2; i <= n; i++) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
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