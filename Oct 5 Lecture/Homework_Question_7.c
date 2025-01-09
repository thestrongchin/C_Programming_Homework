#include <stdio.h>
int main () {
    int int_memory  = 123;
    size_t size = sizeof(int);
    printf("size of int: %zu bytes \n", size);
    printf ("%d \n", int_memory);

    return 0;
}