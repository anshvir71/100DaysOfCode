/* Q119: Find the only repeated element in an array in a single iteration. */

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

    int seen[10000] = {0};
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        if (seen[nums[i]]) {
            repeated = nums[i];
            break;
        }
        seen[nums[i]] = 1;
    }

    printf("%d\n", repeated);

    return 0;
}