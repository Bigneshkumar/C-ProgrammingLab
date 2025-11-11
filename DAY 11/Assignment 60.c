#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {10, 2, 3},
        {4, 20, 6},
        {7, 8, 30}
    };
    int rows = 3;
    int cols = 3;
    int sum = 0;
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements in the matrix is: %d\n", sum);
    return 0;
}