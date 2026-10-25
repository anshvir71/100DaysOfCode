/* Q91: Remove all vowels from a string. */

#include <stdio.h>

int main() {
    char str[1000];

   
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int write_idx = 0;
    for (int read_idx = 0; str[read_idx] != '\0'; read_idx++) {
        char ch = str[read_idx];

        // Check if character is a vowel (case-insensitive)
        int is_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

        if (!is_vowel) {
            str[write_idx++] = ch;
        }
    }
    str[write_idx] = '\0';

    printf("%s\n", str);

    return 0;
}