#include <stdio.h>
int main(){
    // // char a = 'A';
    // // char result = a+1;
    // // printf("result:%c \n", result);
    // // printf("result:%d \n", result);
    // char a = 65;
    // printf("char: %c \n", a);
    // printf("char: %d \n", a);
    char letter = 'A';
    signed char s_char = -100;
    unsigned char us_char = 200;
    printf ("character letter: %c \n", letter);
    printf("signed char value: %d \n", s_char);
    printf ("unsigned char value: %u \n",us_char);
    printf("character '%c'has ASCII value %d \n",letter, letter);
    return 0;
}