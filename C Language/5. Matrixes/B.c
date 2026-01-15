#include <stdlib.h>

int **init_matrix(int rows, int cols) {
    int **mat = malloc(rows * sizeof(int *));
    if (mat == NULL) {
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        mat[i] = malloc(cols * sizeof(int));
        if (mat[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(mat[j]);
            }
            free(mat);
            return NULL;
        }
    }

    return mat;
}
