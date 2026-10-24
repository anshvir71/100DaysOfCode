/* Q84: Convert a lowercase string to uppercase without using built-in functions. */

#include <stdio.h>

int main() {
    char str[1000];

    // Read string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        // If character is lowercase, convert to uppercase using ASCII offset ('a' - 'A' = 32)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("%s\n", str);

    return 0;
}