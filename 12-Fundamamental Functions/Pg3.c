//pg. 3

#include <stdio.h>

int add(int a, int b);

int main(){
    int result = add(5,3);
    printf("The result is %d \n", result);
    return 0;
}

int add(int a, int b){
    int c = a + b;
    return c;
}

//Line 5: declares the function "add", with 2 parameters, (a) and (b).
//Line 8: Calls the function and passes arguments 5 and 3 to parameters (a) and (b)
//Line 13 + 14: Adds parameters (a) and (b), which were passed to by arguments (5) and (3). After adding, the value is added to variable (c)

//Final output: The result is 8