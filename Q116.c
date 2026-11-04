/* Q116: Find two distinct indices such that nums[i] + nums[j] == target. */

#include <stdio.h>

int main() {
    int nums[1000];
    int n = 0;
    int target;
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

    while ((ch = getchar()) != EOF && ch != '=') {
    }

    if (scanf("%d", &target) != 1) {
        return 0;
    }

    int idx1 = -1;
    int idx2 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                idx1 = i;
                idx2 = j;
                break;
            }
        }
        if (idx1 != -1) {
            break;
        }
    }

    printf("%d %d\n", idx1, idx2);

    return 0;
}