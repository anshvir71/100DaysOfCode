/* Q93: Check if two strings are anagrams of each other. */

#include <stdio.h>

int main() {
    char str1[1000];
    char str2[1000];

    if (scanf("%999s", str1) != 1) {
        return 0;
    }
    if (scanf("%999s", str2) != 1) {
        return 0;
    }

    int freq[256] = {0};

    int len1 = 0;
    while (str1[len1] != '\0') {
        freq[(unsigned char)str1[len1]]++;
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        freq[(unsigned char)str2[len2]]--;
        len2++;
    }

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    int is_anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}