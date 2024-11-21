#include <stdio.h>
    int main() {
    int a, b;
    printf("Please enter two numbers:");
    int result = scanf("%d %d ", &a, &b); // Trying to read two integers
    printf("number of input: %d\n", result); // Print the return value
    return 0;
}
