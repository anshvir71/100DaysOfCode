/* Q67: Insert an element in an array at a given position. */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    // Shift elements to the right from index pos up to n - 1
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%d", arr[i]);
        } else {
            printf(" %d", arr[i]);
        }
    }
    printf("\n");

    return 0;
}