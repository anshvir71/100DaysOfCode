/* Q71: Read and print a matrix. */

#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 0;
    }

    int matrix[rows][cols];

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix elements row by row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                printf("%d", matrix[i][j]);
            } else {
                printf(" %d", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}