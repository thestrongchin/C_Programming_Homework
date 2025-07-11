#include <stdio.h>
#include <stdbool.h>
int main (){
    bool a = true;
    bool b = false;
    bool c = (5 > 3);
    bool d = (2+2 == 5);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("5>3 %d\n", c);
    printf("2+2 == 5 = %d\n", d);
    return 0;
}