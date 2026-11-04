/* Q118: Find the missing number in an array containing numbers from 0 to n. */

#include <stdio.h>

int main() {
    int nums[1000];
    int n = 0;
    char ch;

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    int val;
    while (scanf("%d", &val) == 1) {
        nums[n++] = val;
        char sep;
        if (scanf(" %c", &sep) == 1) {
            if (sep == ']') {
                break;
            }
        }
    }

    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

    printf("%d\n", expected_sum - actual_sum);

    return 0;
}