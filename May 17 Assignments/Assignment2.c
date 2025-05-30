#include <stdio.h>

int max_of_three(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int x = 1, y = 2, z = 3;

    int max_value = max_of_three(x, y, z);

    printf("The maximum of %d, %d, and %d is %d\n", x, y, z, max_value);

    return 0;
}
