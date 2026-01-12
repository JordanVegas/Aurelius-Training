#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};

    size_t int_size = sizeof(int);
    size_t array_size = sizeof(arr);
    size_t num_elements = array_size / int_size;

    printf("Size of int: %zu bytes\n", int_size);
    printf("Size of array: %zu bytes\n", array_size);
    printf("Number of elements: %zu\n", num_elements);

    return 0;
}
