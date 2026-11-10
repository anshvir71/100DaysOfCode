/* Q130: Store student records into a file using fprintf() and display using fscanf(). */

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student students[100];
    int count = 0;
    char ch;

    /* Parse student records from input until end of input */
    while ((ch = getchar()) != EOF) {
        if (ch == 'N') {
            /* Check for "Name:" */
            char buf[10];
            int bi = 0;
            buf[bi++] = ch;
            while (bi < 4 && (ch = getchar()) != EOF) {
                buf[bi++] = ch;
            }
            buf[bi] = '\0';

            if (buf[0] == 'N' && buf[1] == 'a' && buf[2] == 'm' && buf[3] == 'e') {
                /* Skip until ':' */
                while ((ch = getchar()) != EOF && ch != ':');
                /* Skip whitespace */
                while ((ch = getchar()) != EOF && (ch == ' ' || ch == '\t'));

                /* Read name */
                int ni = 0;
                while (ch != EOF && ch != ',' && ch != '\n') {
                    students[count].name[ni++] = ch;
                    ch = getchar();
                }
                students[count].name[ni] = '\0';

                /* Find Roll: */
                while ((ch = getchar()) != EOF && ch != ':');
                scanf("%d", &students[count].roll);

                /* Find Marks: */
                while ((ch = getchar()) != EOF && ch != ':');
                scanf("%d", &students[count].marks);

                count++;
            }
        }
    }

    /* Write to file */
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);

    /* Read from file and display */
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    char name[100];
    int roll, marks;
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}