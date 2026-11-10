/* Q121: Write user's name and age to a text file named info.txt. */

#include <stdio.h>

int main() {
    char name[100];
    int age;
    char ch;

    while ((ch = getchar()) != EOF && ch != ':') {
    }
    while ((ch = getchar()) != EOF && (ch == ' ' || ch == '\t')) {
    }

    int idx = 0;
    while (ch != EOF && ch != ',') {
        name[idx++] = ch;
        ch = getchar();
    }
    name[idx] = '\0';

    while ((ch = getchar()) != EOF && ch != ':') {
    }

    if (scanf("%d", &age) != 1) {
        return 0;
    }

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}