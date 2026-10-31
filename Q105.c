/* Q105: Find the majority element appearing strictly more than n / 2 times. */

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

    if (n == 0) {
        printf("-1\n");
        return 0;
    }

    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actual_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actual_count++;
        }
    }

    if (actual_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}