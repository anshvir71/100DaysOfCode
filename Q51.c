#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // Print numbers from i to n
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}