/* Q106: Find next greater element for each element using nested loops. */

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
        int next_greater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }

        if (i == 0) {
            printf("%d", next_greater);
        } else {
            printf(", %d", next_greater);
        }
    }
    printf("\n");

    return 0;
}