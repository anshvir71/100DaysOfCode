/* Q127: Convert all lowercase letters in input.txt to uppercase and save in output.txt */

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    if (src == NULL) {
        return 1;
    }

    FILE *dest = fopen("output.txt", "w");
    if (dest == NULL) {
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(toupper(ch), dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}