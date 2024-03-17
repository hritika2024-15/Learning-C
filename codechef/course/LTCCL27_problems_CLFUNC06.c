/*Parameters, Arguments
Note that there is a difference between Parameters and Arguments.

Parameters are the variables that are listed as part of the method definition. They act like placeholders 
for the values that the method can accept.

Arguments are the actual values which are passed to the method when you call it.
Task
The code given in the IDE is incorrect.
Can you debug the code to give the correct output?
Check the input and expected output below.*/
#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    
    greet("Alice");
}