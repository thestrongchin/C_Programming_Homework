#include <stdio.h>
int main (){
    short num1 = 1 ;
    num1 = 2;
    size_t size = sizeof(num1);
    printf("size of num1 %zu bytes\n", size);
    
    unsigned short num2 = 2;
    size_t size2 = sizeof(num2);
    printf("size of num2 %zu bytes\n", size2);
   
    int num3;
    size_t size3 = sizeof(num3);
    printf("size of num3 %zu bytes\n", size3);

    unsigned int num4;
    size_t size4 = sizeof(num4);
    printf("size of num4 %zu bytes\n", size4);

    long num5;
    size_t size5 = sizeof(num5);
    printf("size of num5 %zu bytes\n", size5);

    unsigned long num6;
    size_t size6 = sizeof(num6);
    printf("size of num6 %zu bytes\n", size6);

    long long num7;
    size_t size7 = sizeof(num7);
    printf("size of num7 %zu bytes\n", size7);

    unsigned long long num8;
    size_t size8 = sizeof(num8);
    printf("size of num8 %zu bytes\n", size8);

   

    return 0;
}
