/* Q129: Read integers from numbers.txt, compute and print sum and average. */

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    int num;
    long long sum = 0;
    int count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}