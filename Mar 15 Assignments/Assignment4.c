#include <stdio.h>
int main(){
    int percentage;
    int level;

    printf("Please enter a percentage to be converted to a grade ");
    scanf(" %d", &percentage);

    level = percentage / 10;
    
    switch(level){
        case 6:
            printf("Your grade is D.");
            break;

        case 7: 
            printf("Your grade is C.");
            break;

        case 8:
            printf("Your grade is B");
            break;

        case 10:

        case 9: 
            printf("Your grade is A");
            break;

        default:
            printf("Your grade is F");
            break;
    }

return 0;
}

