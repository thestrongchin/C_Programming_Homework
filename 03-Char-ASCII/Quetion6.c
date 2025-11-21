// Question 6:
// Without compiling, please predict
// the output of following program.

// #include <stdio.h>
// int main(){
// printf("c:\test\test.c\n");
// printf("c:\\test\\01\\test.c\n");
// return 0;
// }

// I predict that the output would be
// c:      est     est.c
// c: \\test\\01\\test.c
// The reason for the first line is becuase that \t means tab, so with an \t at the start of \test, It would create a tab, leaving only 'est' after.
// The reason for the second line is that there are double forward slashes, which does not trigger a tab. Instead, It just leaves the printed part as is.

// Testing:
#include <stdio.h>
int main(){
printf("c:\test\test.c\n");
printf("c:\\test\\01\\test.c\n");
return 0;
}

// Conclusion:
// I was correct about the first line, but on the second line, 
// it turns out that the output removes a slash from the double forward slashes.
// I'm not sure why it removes the first slash, but I am guessing it has something to do with the existing function with 2 forward slashes which omits a line.
