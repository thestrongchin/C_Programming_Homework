#include <stdio.h>

int main() {
    int num;
    int total = 0;

    while (1) {
        printf("Enter numbers to add: (enter a negative number to stop) ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        total += num;
    }

    printf("The total is: %d\n", total);
    return 0;
}