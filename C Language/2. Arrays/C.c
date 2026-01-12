#include <stdio.h>

double average(int arr[], int length) {
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    return (double)sum / length;
}

int max_in_array(int arr[], int length) {
    int max = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int max_in_array(int arr[], int length);

int main() {
    int numbers[] = {3, 7, 2, 9, 4};
    int size = 5;

    printf("Max: %d\n", max_in_array(numbers, size));
    return 0;
}
