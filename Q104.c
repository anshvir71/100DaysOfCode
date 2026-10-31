/* Q104: Find the pivot integer. */

#include <stdio.h>

int main() {
    int n;
    char ch;

    while ((ch = getchar()) != EOF && ch != '=') {
    }

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    long long total_sum = (long long)n * (n + 1) / 2;
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        long long sum_left = (long long)x * (x + 1) / 2;
        long long sum_right = total_sum - (long long)x * (x - 1) / 2;

        if (sum_left == sum_right) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}