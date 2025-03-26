#include <stdio.h>
int main(){
    int percentage;
    char level;

    printf("Please enter a percentage to be converted to a grade and get feedback on your performance. ");
    scanf(" %d", percentage);

    if(percentage <= 100 || percentage >= 90){
        level = 'A';
    }

    if(percentage <= 89 || percentage >= 80){
        level = 'B';
    }

    if(percentage <= 79 || percentage >= 70){
        level = 'C';
    }

    if(percentage <= 69 || percentage >= 60){
        level = 'D';
    }
    
    if(percentage <= 59 || percentage >= 0){
        level = 'F';
    }

    switch(level){

        case 'A':
            printf("Excellent work! Your grade is: A. ");
            break;

        case 'B':
            printf("Good work! Your grade is: B. ");
            break;

        case 'C':
            printf("Acceptable work. Your grade is: C. ");
            break;

        case 'D':
            printf("You can do better. Try harder next time. Your grade is: D. ");
            break;
        
        case 'F':
            printf("Think about how you failed. Try WAY harder next time. Your grade is F. ");
            break;

        default:
            if(percentage < 100){
                printf("Your percentage cannot be over 100%%. Program terminating.. .");
            
            }else{
                printf("Your percentage cannot be under 0%%. Program terminating... ");
            }
            break;
    }

}