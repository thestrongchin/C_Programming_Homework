#include <stdio.h>
int main() {
    float f = 1.234567;
    double d = 1.2345678902345;
    long double ld = 1.234567890123456789;
    printf ("f %f,\nd %lf,\nld %Lf \n", f, d, ld);
    return 0;
}