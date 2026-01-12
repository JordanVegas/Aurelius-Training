#include <stdio.h>

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int min, max;
    int best_number = 0;
    int max_sum = -1;

    scanf("%d %d", &min, &max);

    for (int i = min; i <= max; i++) {
        int current_sum = digit_sum(i);
        if (current_sum > max_sum) {
            max_sum = current_sum;
            best_number = i;
        }
    }

    printf("%d\n", best_number);
    return 0;
}
