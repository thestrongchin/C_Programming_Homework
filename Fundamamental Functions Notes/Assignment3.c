#include <stdio.h>
float circle_area(float radius){

    float pi = 3.14;

    return pi * radius * radius;
}

int main(){
    float rad = 5;

    float area = circle_area(rad);

    printf("The area of the circle is: %.2f", area);

    return 0;
}
