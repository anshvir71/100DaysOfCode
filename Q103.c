/* Q103: Find the pivot index of an array. */

#include <stdio.h>

int main() {
    int nums[1000];
    int n = 0;
    char ch;

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    if (ch == '[') {
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
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += nums[i];
    }

    int left_sum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++) {
        if (left_sum == total_sum - left_sum - nums[i]) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}