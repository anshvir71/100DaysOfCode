/* Q78: Find the sum of main diagonal elements for a square matrix. */

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

    int sum = 0;
    int diag_size = (rows < cols) ? rows : cols;
    for (int i = 0; i < diag_size; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}