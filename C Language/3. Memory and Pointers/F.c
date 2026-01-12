#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    int sum = 0;
    int *p = arr;
    int *end = arr + n;

    while (p < end) {
        sum += *p;
        p++;
    }

    printf("%d\n", sum);
    return 0;
}
