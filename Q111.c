/* Q111: First negative integer in each subarray of size k. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
    int k;
    char ch;

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    int val;
    while (scanf("%d", &val) == 1) {
        arr[n++] = val;
        char sep;
        if (scanf(" %c", &sep) == 1) {
            if (sep == ']') {
                break;
            }
        }
    }

    while ((ch = getchar()) != EOF && ch != '=') {
    }

    if (scanf("%d", &k) != 1) {
        return 0;
    }

    if (n < k || k <= 0) {
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int first_neg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                break;
            }
        }

        if (i == 0) {
            printf("%d", first_neg);
        } else {
            printf(" %d", first_neg);
        }
    }
    printf("\n");

    return 0;
}