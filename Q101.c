/* Q101: First and last occurrence of a target in a sorted array. */

#include <stdio.h>

int main() {
    int nums[1000];
    int n = 0;
    int target;
    char ch;

    while ((ch = getchar()) != EOF && ch != '[') {
        // Find opening bracket
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
        // Find '=' for target
    }

    if (scanf("%d", &target) != 1) {
        return 0;
    }

    int first = -1;
    int last = -1;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}