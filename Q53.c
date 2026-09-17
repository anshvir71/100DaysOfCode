#include <stdio.h>

int main() {
    int max_stars = 9;

    // Upper half including the middle row (1, 3, 5, 7, 9)
    for (int i = 1; i <= max_stars; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (7, 5, 3, 1)
    for (int i = max_stars - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}