#include <stdio.h>
int main() {

    long double originalPrice, discountRate, discountedPrice;

    printf("Enter the total price ");
    scanf("%Lf", &originalPrice);

    printf("Enter the discount rate in percent form ");
    scanf("%Lf", &discountRate);

    discountedPrice = originalPrice - (originalPrice * (discountRate / 100));
    printf("The price after a %.2Lf%% discount is: %.2Lf\n", discountRate, discountedPrice);

    return 0;
}