/* Q92: Find the first repeating lowercase alphabet in a string. */

#include <stdio.h>

int main() {
    char str[1000];

    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (freq[index] == 1) {
                printf("%c\n", str[i]);
                return 0;
            }
            freq[index] = 1;
        }
    }

    return 0;
}