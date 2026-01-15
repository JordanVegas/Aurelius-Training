#include <stdio.h>

void **print_matrix(int **a, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");   // ירידת שורה בסוף כל שורה
    }
    return (void **)a;
}
