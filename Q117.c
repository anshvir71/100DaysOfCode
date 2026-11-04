/* Q117: Merge two sorted arrays into one sorted array. */

#include <stdio.h>

int main() {
    int nums1[1000];
    int nums2[1000];
    int m = 0;
    int n = 0;
    char ch;

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    int val;
    while (scanf("%d", &val) == 1) {
        nums1[m++] = val;
        char sep;
        if (scanf(" %c", &sep) == 1) {
            if (sep == ']') {
                break;
            }
        }
    }

    while ((ch = getchar()) != EOF && ch != '[') {
    }

    while (scanf("%d", &val) == 1) {
        nums2[n++] = val;
        char sep;
        if (scanf(" %c", &sep) == 1) {
            if (sep == ']') {
                break;
            }
        }
    }

    int i = 0, j = 0;
    int first = 1;

    while (i < m && j < n) {
        if (!first) {
            putchar(' ');
        }
        first = 0;

        if (nums1[i] <= nums2[j]) {
            printf("%d", nums1[i++]);
        } else {
            printf("%d", nums2[j++]);
        }
    }

    while (i < m) {
        if (!first) {
            putchar(' ');
        }
        first = 0;
        printf("%d", nums1[i++]);
    }

    while (j < n) {
        if (!first) {
            putchar(' ');
        }
        first = 0;
        printf("%d", nums2[j++]);
    }
    putchar('\n');

    return 0;
}