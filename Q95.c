/* Q95: Check if one string is a rotation of another. */

#include <stdio.h>

int main() {
    char s1[1000];
    char s2[1000];

    if (scanf("%999s", s1) != 1) {
        return 0;
    }
    if (scanf("%999s", s2) != 1) {
        return 0;
    }

    int len1 = 0;
    while (s1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (s2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char concat[2000];
    for (int i = 0; i < len1; i++) {
        concat[i] = s1[i];
        concat[i + len1] = s1[i];
    }
    concat[2 * len1] = '\0';

    int is_rotation = 0;
    for (int i = 0; i <= len1; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (concat[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            is_rotation = 1;
            break;
        }
    }

    if (is_rotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}