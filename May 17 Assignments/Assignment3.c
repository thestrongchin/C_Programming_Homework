#include <stdio.h>

float circle_area(float r) {
    float pi = 3.14159;
    return pi * r * r;
}

int main() {
    float radius = 5.0;

    float area = circle_area(radius);

    printf("The area of a circle with radius %.2f is %.4f\n", radius, area);

    return 0;
}
