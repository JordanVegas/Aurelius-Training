#include <stdio.h>
#include <stdlib.h>

int* allocate_array(int size) {
    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }
    return arr;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 0) {
        return 1;
    }

    int *array = allocate_array(size);
    if (array == NULL) {
        return 1;
    }

    // דוגמה לשימוש במערך
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
