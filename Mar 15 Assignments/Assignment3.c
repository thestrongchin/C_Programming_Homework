#include <stdio.h>
int main(){
    int choice;

    float circleRadius;

    float rectangleLength;
    float rectangleWidth;

    float triangleHeight;
    float triangleBase;

    float total;

    while(1){

        printf("Please make a selection: \n");
        printf("1 = Circle \n");
        printf("2 = Rectangle \n");
        printf("3 = Triangle \n");
        printf("4 = Exit \n");

        printf("Enter your selection here: ");
        scanf(" %d", &choice);

    

        switch(choice){
            case 1:
                printf("Enter the radius of the circle ");
                scanf(" %f", &circleRadius);
                
                total = circleRadius * circleRadius * 3.14159;
                printf("The area of the circle is: %.2f \n \n", total);

                break;

            case 2: 
                printf("Enter the length of the rectangle: ");
                scanf(" %f", &rectangleLength);

                printf("Enter the width of the rectangle: ");
                scanf(" %f", &rectangleWidth);

                total = rectangleLength * rectangleWidth;
                printf("The area of the rectangle is %.2f \n \n", total);
                
                break;

            case 3:
                printf("Enter the height of the triangle: ");
                scanf(" %f", &triangleHeight);

                printf("Enter the base of the triangle: ");
                scanf(" %f", &triangleBase);

                total = triangleBase * triangleHeight / 2;
                printf("The area of the triangle is %.2f \n \n", total);
                
                break;

            case 4: 
                printf("You have now been exited out of this program, have a nice day.");
                return 0;

            default:
                printf("Sorry, %d is not a valid selection. Please select one of the following: \n", choice);

        }
    }
    return 0;
}