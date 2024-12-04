#include <stdio.h>
int main(){
    int num;
    int result = 1;
    printf("Please enter an integer ");
    result = scanf("%d", &num);

    if (result == 1){
        printf("You entered %d", num);
        return 0;
    }else{
        printf("Sorry, that's an invalid input. Please enter an integer.");
        return 0;
    }
}