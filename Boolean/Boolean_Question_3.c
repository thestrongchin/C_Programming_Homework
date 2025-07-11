// Question: please predict the output of the following program without compiling.
// bool a1 = 1.1;
// bool a2 = -0.5;
// bool a3 = 100;
// bool a4 = -20;
// bool a4 = true;
// printf("d%\n",a1);
// printf("d%\n",a2);
// printf("d%\n",a3);
// printf("d%\n",a4);
// printf("d%\n",a5);

// I predict that the the output is going to be
// 1
// 1
// 1
// 1
// 1

// Testing:
#include <stdio.h>
#include <stdbool.h>
int main(){
    bool a1 = 1.1;
    bool a2 = -0.5;
    bool a3 = 100;
    bool a4 = -20;
    bool a5 = true;
    printf("a1 = %d \n",a1);
    printf("a2 = %d \n",a2);
    printf("a3 = %d \n",a3);
    printf("a4 = %d \n",a4);
    printf("a5 = %d \n",a5);
    return 0;
}

