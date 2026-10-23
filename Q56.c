/* Q56: Read and print elements of a one-dimensional array. */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", arr[i]);
        } else {
            printf(" %d", arr[i]);
        }
    }
    printf("\n");

    return 0;
}