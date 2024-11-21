#include <stdio.h>
int main(){
    int age;
    int result = 100;
    printf("Please enter your age");
    result = scanf("%d", &age);

    if (result == 0){
        printf("Sorry, you entered a character, enter a number \n");
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }

    else if (age<0){
        printf("Are you not born? Enter a positive number as your age\n", age);
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }
 
    else if (age < 18){
        printf("You are a child");
        return 0;
    }
    
    else if (age >= 18, age <= 25){
        printf("You are a teen");
        return 0;
    }
    else (age > 25);
        printf("You are an adult");
        return 0;
    }


