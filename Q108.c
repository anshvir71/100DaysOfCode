/* Q108: Product of array except self. */

#include <stdio.h>

int main() {
    int nums[1000];
    int answer[1000];
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
        printf("[]\n");
        return 0;
    }

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");

    return 0;
}