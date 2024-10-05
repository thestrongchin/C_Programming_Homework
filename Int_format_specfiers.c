#include <stdio.h>
int main () {
    short s = -32768;
    unsigned short us = 65535;
    int i = -12345;
    unsigned int ui = 12345;
    long l = 1234567890UL;
    unsigned long ul = -12345678901234ULL;
    long long ll = 123456789012345ULL;
    unsigned long long ull = sizeof(int);
    
    printf("short s = %hd \n", s);
    printf("unsigned short us = %hu \n", us);

    printf("int i = %d \n", i);
    printf("unsigned int ui = %u \n", ui);

    printf("long l = %ld \n", l);
    printf("unsigned long ul = %lu \n", ul);

    printf("long long ll = %lld \n", ll);
    printf("unsigned long long ull = %llu \n", ull);


}