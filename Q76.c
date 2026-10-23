/* Q76: Check if a matrix is symmetric. */

#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 0;
    }

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A non-square matrix cannot be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int is_symmetric = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    if (is_symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}