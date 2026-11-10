/* Q120: Convert a string to sentence case. */

#include <stdio.h>

int main() {
    char str[1000];

    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    char *p = str;
    if (p[0] == 's' && p[1] == 't' && p[2] == 'r') {
        char *temp = p + 3;
        while (*temp == ' ') {
            temp++;
        }
        if (*temp == '=') {
            temp++;
            while (*temp == ' ') {
                temp++;
            }
            p = temp;
        }
    }

    int new_word = 1;
    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] == ' ') {
            new_word = 1;
        } else {
            if (new_word) {
                if (p[i] >= 'a' && p[i] <= 'z') {
                    p[i] = p[i] - ('a' - 'A');
                }
                new_word = 0;
            }
        }
    }

    printf("%s\n", p);

    return 0;
}