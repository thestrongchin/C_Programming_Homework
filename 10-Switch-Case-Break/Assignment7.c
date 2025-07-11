#include <stdio.h>
int main(){
    float weight;
    float BMI;
    float height;
    int level;

    printf("Enter your weight in KG. ");
    scanf(" %f", &weight);

    printf("Enter your height in meters. ");
    scanf(" %f", &height);

    BMI = weight / (height * height);

    if(BMI < 18.5){
        level = 1;
    }

    if(BMI <= 24.9|| BMI >= 18.5){
        level = 2;
    }

    if(BMI >= 25 || BMI >= 29.9){
        level = 3;
    }

    if(BMI > 30){
        level = 4;
    }

    switch(level){
        case 1: 
            printf("You are underweight.");
            break;

        case 2:
            printf("You are normal weight.");
            break;
        
        case 3:
            printf("You are overweight");
            break;

        case 4: 
            printf("You are obese");
            break;
    }
    return 0;
}