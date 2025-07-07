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

//Line 5: declares the function with 2 parameters, (a) and (b)
//Line 8: Calls the function and passes 5 and 3 to parameters (a) and (b)
//Line 13 + 14: Recieves line 8 calling it and adds parameters (a) and (b), which are equal to 5 and 3. After adding, the value is added to (c)
//Line 15: Returns the total (c) to line 9
//Line 9: Recieves the total from line 15 and prints it out

//Final output: The result is 8