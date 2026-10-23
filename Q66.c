/* Q66: Insert an element in a sorted array at the appropriate position. */

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

    int key;
    scanf("%d", &key);

    // Shift elements greater than key to the right
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;

    for (int j = 0; j <= n; j++) {
        if (j == 0) {
            printf("%d", arr[j]);
        } else {
            printf(" %d", arr[j]);
        }
    }
    printf("\n");

    return 0;
}