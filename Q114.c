/* Q114: Length of the longest substring without repeating characters. */

#include <stdio.h>

int main() {
    char s[1000];
    char ch;

    while ((ch = getchar()) != EOF && ch != '"') {
    }

    int n = 0;
    while ((ch = getchar()) != EOF && ch != '"') {
        s[n++] = ch;
    }
    s[n] = '\0';

    int last_idx[256];
    for (int i = 0; i < 256; i++) {
        last_idx[i] = -1;
    }

    int max_len = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last_idx[c] >= start) {
            start = last_idx[c] + 1;
        }
        last_idx[c] = i;

        int curr_len = i - start + 1;
        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }

    printf("%d\n", max_len);

    return 0;
}