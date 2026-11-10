/* Q126: Check if a file exists, then display content or show error. */

#include <stdio.h>

int main() {
    char filename[256];
    char ch;

    /* Skip optional label prefix if present, e.g., "Filename: " */
    while ((ch = getchar()) != EOF && ch != ':') {
        if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r') {
            ungetc(ch, stdin);
            break;
        }
    }

    if (scanf("%255s", filename) != 1) {
        return 0;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }

    printf("File opened successfully.\n");

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}