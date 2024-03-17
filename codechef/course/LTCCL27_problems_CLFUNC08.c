/*Function within a function
In C, you can call functions within other functions. These functions can call other functions 
at any level of nesting or independently.
Task
You are given a code in the IDE. Complete the aMinusBSquare function by calling the square function inside it.*/
#include <stdio.h>

// Function to calculate the square of a number
int square(int a) {
    return a * a;
}

// Function to calcuate (a - b) ^ 2
int aMinusBSquare(int a, int b) {
    return square(a)-2*a*b+square(b);
    
}

int main() {
    int result = aMinusBSquare(2, 1);
    printf("Result: %d\n", result);
}
