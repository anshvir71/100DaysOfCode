/* Q123: Read a text file and count characters, words, and lines. */

#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;
    int ch;
    int last_char = -1;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        last_char = ch;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            in_word = 0;
        } else {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }

    if (characters > 0 && last_char != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}