/* Q63: Merge two arrays. */

#include <stdio.h>

int main() {
    int n1;
    if (scanf("%d", &n1) != 1) {
        return 0;
    }

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    if (scanf("%d", &n2) != 1) {
        return 0;
    }

    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    for (int i = 0; i < n1 + n2; i++) {
        if (i == 0) {
            printf("%d", merged[i]);
        } else {
            printf(" %d", merged[i]);
        }
    }
    printf("\n");

    return 0;
}