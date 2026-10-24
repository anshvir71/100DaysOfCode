/* Q81: Count characters in a string without using built-in length functions. */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full line including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        printf("0\n");
        return 0;
    }

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}