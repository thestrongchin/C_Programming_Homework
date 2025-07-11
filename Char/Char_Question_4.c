//Question 4 asks:
//Without compiling, please predict the output of following program.
// char c1 = 20;
// char c2 = c1 + 'a';
// printf("%c\n", c2);
// printf("%d\n", c2);

// I predict that the output would be [SPACE] 117, because 
// char c1 equals 20, annd 20 maps to a space on the ASCII table. The printf makes it a space instead of just 20 because it uses %c format specifier.
// char c2 equals 20+97, because the letter 'a' in the code represents 97 on the ASCII table. 97+20 = 117, and the printf prints it as an integer because it uses %d 
// format specifier.

// Testing:
#include <stdio.h>
int main (){   
    char c1 = 20;
    char c2 = c1 + 'a';
    printf("%c\n", c2);
    printf("%d\n", c2);
    return 0;
}
// Conclusion:
// The output was not [SPACE] 117 as I predicted, but instead it was u 117. I got the 117 part correct, but not the 'u'. I'm not sure why it printed as 'u' instead of [SPACE].