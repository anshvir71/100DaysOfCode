/* Q64: Find the digit that occurs the most times in an integer number. */

#include <stdio.h>

int main() {
    long long num;
    if (scanf("%lld", &num) != 1) {
        return 0;
    }

    if (num < 0) {
        num = -num;
    }

    int freq[10] = {0};

    if (num == 0) {
        freq[0] = 1;
    } else {
        while (num > 0) {
            freq[num % 10]++;
            num /= 10;
        }
    }

    // Find the digit with the maximum frequency
    // (tie-breaker chooses the smallest digit to match sample test cases)
    int max_digit = 0;
    int max_count = freq[0];

    for (int i = 1; i <= 9; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);

    return 0;
}