/* Q124: Copy content from source file to destination file using fgetc() and fputc(). */

#include <stdio.h>

int main() {
    char source_path[256];
    char dest_path[256];

    if (scanf("%255s %255s", source_path, dest_path) != 2) {
        return 0;
    }

    FILE *src = fopen(source_path, "r");
    if (src == NULL) {
        return 1;
    }

    FILE *dest = fopen(dest_path, "w");
    if (dest == NULL) {
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", dest_path);

    return 0;
}