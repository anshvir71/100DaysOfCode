/* Q112: Maximum sum of contiguous subarray using Kadane's algorithm. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
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

    if (n == 0) {
        return 0;
    }

    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (curr_max + arr[i] > arr[i]) {
            curr_max = curr_max + arr[i];
        } else {
            curr_max = arr[i];
        }

        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }

    printf("%d\n", max_so_far);

    return 0;
}