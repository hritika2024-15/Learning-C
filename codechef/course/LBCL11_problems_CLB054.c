/*Taking user input
You have already learned that printf() is used to output (print) values.
Now we will use scanf() to get user input.

The scanf() function is used for input. It reads the input data from the console.
Task
Write a program which does the following

Declare an integer variable a
Try taking a number from the console and assign it to a
Output a to the console*/
#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    printf("Your number is: %d", a);
  
}
