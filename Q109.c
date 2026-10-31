/* Q109: Maximum sum of all subarrays of size k. */

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

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);

    return 0;
}