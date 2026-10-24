/* Q90: Toggle case of each character in a string. */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Lowercase to uppercase
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Uppercase to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
    }

    printf("%s\n", str);

    return 0;
}