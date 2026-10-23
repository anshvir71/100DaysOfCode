/* Q75: Add two matrices. */

#include <stdio.h>

int main() {
    int r1, c1;
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) {
        return 0;
    }

    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int r2, c2;
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) {
        return 0;
    }

    int b[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2) {
        return 0;
    }

    int sum[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (j == 0) {
                printf("%d", sum[i][j]);
            } else {
                printf(" %d", sum[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}