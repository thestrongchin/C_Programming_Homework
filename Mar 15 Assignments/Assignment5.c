// Explain the result in the following code:
//  - if input value is 1
//  - if input value is 6
#include <stdio.h>
    int main() {
    int date = 0;

    printf("Please enter a date (1-7):");
    scanf("%d", &date);

    if (date < 0 || date > 7) {
        printf("Invalid date input.\n");
        return 1;
    }
switch(date){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("weekday\n");
        break;

    case 6:
    case 7:
        printf("weekend\n");
        break;

    default:
        printf("please enter 1 to 7");
        break;
    }

return 0;
}

// result: 
// 1 = weekday
// reason: line 15 says that if user enters 1-5, it will print out weekday. 1 is in 1-5, which means the code prints weekday.

// result 2:
// 6 = weekend
// reason: line 24 says that if user enters 6 or 7, the code prints out weekend. 6 is in 6 or 7, which means the code prints weekend.