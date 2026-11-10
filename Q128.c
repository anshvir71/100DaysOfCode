/* Q128: Count vowels and consonants using only stdio.h */

#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    int vowels = 0;
    int consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        char lower = (char)ch;

        if (lower >= 'A' && lower <= 'Z') {
            lower = lower + ('a' - 'A');
        }

        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}