#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the upper half

    // Upper half (including the middle row)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Print stars: 1, 3, 5, 7
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Print stars: 5, 3, 1
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

 
    return 0;
}