#include <stdio.h>

int main() {
    char ch;
    int spaces = 0;
    int lines = 0;
    int other = 0;

    printf("Please enter text (end with #):\n");

    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            spaces++;
        } else if (ch == '\n') {
            lines++;
        } else {
            other++;
        }
    }

    printf("Spaces = %d, Lines = %d, Other characters = %d\n", spaces, lines, other);
    return 0;
}
