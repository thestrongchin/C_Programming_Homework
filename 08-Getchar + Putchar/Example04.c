#include <stdio.h>
int main(){
    int ch;
    printf("Please enter a single character ");
    ch = getchar();

    if (ch != EOF){
        printf("You entered %c", ch);
        return 0;
    } else {
        printf("You entered an invald character");
        return 0;
    }
}