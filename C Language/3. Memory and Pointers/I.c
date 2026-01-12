#include <stdlib.h>

void* resize_array(void* array, int current_len, int add, size_t elem_size) {
    int new_len = current_len + add;

    void* new_array = realloc(array, new_len * elem_size);
    if (new_array == NULL) {
        return array;
    }

    return new_array;
}
