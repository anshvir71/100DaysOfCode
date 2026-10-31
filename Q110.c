/* Q110: Maximum element in each subarray of size k. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
    int k;
    char ch;

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    if (ch == '[') {
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
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }

        if (i == 0) {
            printf("%d", max_val);
        } else {
            printf(" %d", max_val);
        }
    }
    printf("\n");

    return 0;
}