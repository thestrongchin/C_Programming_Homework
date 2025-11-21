// Question: Predict output of:
// #include <stdio.h>
// int main(){
    // int a =10;
    // printf("first a: %d\n",a++);
    // printf("second a: %d\n",a);
    // int b =10;
    // printf("first b: %d\n",++b);
    // printf("second b: %d\n",b);
    // return 0;
// }    

// I predict that the output will be 
// first a: 10
// second a: 11
// first b: 11
// second b: 11

// Testing:
#include <stdio.h>
int main(){
    int a =10;
    printf("first a: %d\n",a++);
    printf("second a: %d\n",a);
    int b =10;
    printf("first b: %d\n",++b);
    printf("second b: %d\n",b);
    return 0;
}   