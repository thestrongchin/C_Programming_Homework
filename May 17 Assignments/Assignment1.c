#include <stdio.h>

float average(float x, float y) {
    return (x + y) / 2.0;
}

int main() {
    float num1 = 1.5;
    float num2 = 2.5;

    float result = average(num1, num2);

    printf("The average of %.2f and %.2f is %.2f\n", num1, num2, result);

    return 0;
}
