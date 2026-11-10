/* Q125: Append a new line of text to an existing file. */

#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        return 1;
    }

    char text[1000];
    if (scanf("%[^\n]", text) == 1) {
        fprintf(fp, "\n%s", text);
    }

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}