#include <stdio.h>

float average (float x, float y)
{
    return (x + y) / 2;
}

int main(){
    float x = 1, y = 2;
    float result = average(x, y);
    printf("The average is: %f \n", result);
    return 0;
}