#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int count[10] = {0};

    if (argc != 2) {
        return 1;
    }

    int n = atoi(argv[1]);

    if (n == 0) {
        count[0] = 1;
    }

    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, count[i]);
    }

    return 0;
}
