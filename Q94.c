/* Q94: Find the longest word in a sentence. */

#include <stdio.h>

int main() {
    char str[1000];

    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int max_len = 0;
    int max_start = 0;
    int curr_len = 0;
    int curr_start = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (curr_len == 0) {
                curr_start = i;
            }
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            curr_len = 0;
        }

        if (str[i] == '\0') {
            break;
        }
    }

    for (int i = 0; i < max_len; i++) {
        putchar(str[max_start + i]);
    }
    putchar('\n');

    return 0;
}