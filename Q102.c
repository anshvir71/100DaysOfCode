/* Q102: Find the index of the ceil of an element in a sorted array. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
    int x;
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

    if (scanf("%d", &x) != 1) {
        return 0;
    }

    int low = 0, high = n - 1;
    int ceil_idx = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ceil_idx = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ceil_idx);

    return 0;
}