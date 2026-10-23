/* Q79: Perform diagonal traversal of a matrix (zigzag / upward-downward diagonals). */

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

    int first = 1;
    // Total diagonals in an M x N matrix is rows + cols - 1
    for (int s = 0; s < rows + cols - 1; s++) {
        if (s % 2 == 0) {
            // Even sum diagonal: traverse upwards (row decreases, col increases)
            int r = (s < rows) ? s : rows - 1;
            int c = s - r;
            while (r >= 0 && c < cols) {
                if (first) {
                    printf("%d", matrix[r][c]);
                    first = 0;
                } else {
                    printf(" %d", matrix[r][c]);
                }
                r--;
                c++;
            }
        } else {
            // Odd sum diagonal: traverse downwards (row increases, col decreases)
            int c = (s < cols) ? s : cols - 1;
            int r = s - c;
            while (r < rows && c >= 0) {
                if (first) {
                    printf("%d", matrix[r][c]);
                    first = 0;
                } else {
                    printf(" %d", matrix[r][c]);
                }
                r++;
                c--;
            }
        }
    }
    printf("\n");

    return 0;
}