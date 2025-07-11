#include <stdio.h>
int main(){
    int a = 7;
    int b = 2;
    int c = 5;
    int multi_div = (a*b)/c;
    int div_multi = a/(b*c);

    printf("question 1 total = %d\n", multi_div);
    printf("question 2 total = %d\n", div_multi);
    return 0;
}