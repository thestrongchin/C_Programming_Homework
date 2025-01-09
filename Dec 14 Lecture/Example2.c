#include <stdio.h>
int main(){
    int result = putchar('A');
        if(result != EOF){
            printf("\n putchar has outputted the character: %c \n", result);
            return 0;
            
        } else {
            printf("|n putchar failed to output the character, please check for errors");
            return 0;
        }
}
