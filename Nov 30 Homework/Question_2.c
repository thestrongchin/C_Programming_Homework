#include <stdio.h>
int main(){
    int num;
    int result = 1;
    printf("Please enter an integer ");
    result = scanf("%d", &num);

    if (result == 0){
        printf("Sorry, you entered a character, please enter an integer \n");
        return 0;
    }
    printf("You entered %d", num);
    return 0;
}
