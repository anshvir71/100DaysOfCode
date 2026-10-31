/* Q107: Find previous greater element for each element using nested loops. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
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

    for (int i = 0; i < n; i++) {
        int prev_greater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }

        if (i == 0) {
            printf("%d", prev_greater);
        } else {
            printf(", %d", prev_greater);
        }
    }
    printf("\n");

    return 0;
}