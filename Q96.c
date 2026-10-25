/* Q96: Reverse each word in a sentence without changing the word order. */

#include <stdio.h>

int main() {
    char str[1000];

    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int start = 0;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int left = start;
            int right = i - 1;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }
    }

    printf("%s\n", str);

    return 0;
}