/* Q77: Check if the elements on the diagonal of a matrix are distinct. */

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

    // Number of diagonal elements is min(rows, cols)
    int diag_size = (rows < cols) ? rows : cols;
    int is_distinct = 1;

    // Compare all pairs of primary diagonal elements
    for (int i = 0; i < diag_size; i++) {
        for (int j = i + 1; j < diag_size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = 0;
                break;
            }
        }
        if (!is_distinct) {
            break;
        }
    }

    if (is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}