#include <stdio.h>

int main() {
    int n;

    for (n = 100; n <= 999; n++) {
        int temp = n;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == n) {
            printf("%d\n", n);
        }
    }

    return 0;
}
