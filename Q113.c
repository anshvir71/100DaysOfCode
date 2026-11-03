/* Q113: Find the kth smallest element in an array. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
    int k;
    char ch;

    while ((ch = getchar()) != EOF && ch != '=') {
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

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    }

    return 0;
}