/*Return values
Functions in C can serve two primary purposes when it comes to providing information to the caller:
 they can either return a value or print an output.

Returning Values from Functions:
When a function returns a value, it's providing a piece of data back to the caller.
This data can be used for further processing, assignment to variables, or any other purpose within the program. 
The return statement is used to send a value back to the caller.
Task
Update the function given in the IDE to output the following to the IDE by printing from inside the function.
A*A+2*A*B+B*B
A+B*/
#include <stdio.h>

void compute_value(int a, int b) {
    // update your code below this line
    int result=a*a+2*a*b+b*b;
    int add=a+b;
    printf("%d\n",result);
    printf("%d\n",add);
    
}

int main() {
    int t = 3;

    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        compute_value(A, B);
    }
}