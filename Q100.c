/* Q100: Print all sub-strings of a string. */

#include <stdio.h>

int main() {
    char str[1000];

    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) {
                putchar(',');
            }
            first = 0;

            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
        }
    }
    putchar('\n');

    return 0;
}