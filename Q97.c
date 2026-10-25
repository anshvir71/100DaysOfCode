/* Q97: Print the initials of a name. */

#include <stdio.h>

int main() {
    char str[1000];

    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!in_word) {
                char ch = str[i];
                if (ch >= 'a' && ch <= 'z') {
                    ch = ch - ('a' - 'A');
                }
                printf("%c.", ch);
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    printf("\n");

    return 0;
}