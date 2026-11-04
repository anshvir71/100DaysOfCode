/* Q115: Check if two strings are valid anagrams. */

#include <stdio.h>

int main() {
    char s[1000];
    char t[1000];
    char ch;

    while ((ch = getchar()) != EOF && ch != '"') {
    }

    int len_s = 0;
    while ((ch = getchar()) != EOF && ch != '"') {
        s[len_s++] = ch;
    }
    s[len_s] = '\0';

    while ((ch = getchar()) != EOF && ch != '"') {
    }

    int len_t = 0;
    while ((ch = getchar()) != EOF && ch != '"') {
        t[len_t++] = ch;
    }
    t[len_t] = '\0';

    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    int is_anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}