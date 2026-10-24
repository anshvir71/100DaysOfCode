/* Q86: Check if a string is a palindrome. */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        printf("Palindrome\n");
        return 0;
    }

    // Determine string length manually
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int is_palindrome = 1;
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}