/*Number mirror - Negative integer
Let us now solve some programming problems. Note that

In the IDE - the text after '//' is comments which doesn't affect the code and will give you hints about what you need to do
The Solution tab also has '//' - comments which give you helpful information
Task
Write a program in the IDE which does the following

Accepts the count of test cases - t - in the 1st line
The only line of each test case consists of an integer N
You need to generate the following output - Change the sign of N.
That is, if the input is 4, output -4. If the input is -5, output 5.*/
#include <stdio.h>

int main() {
    int t;
    int N;
    int i = 1;
    //accept the count of test cases given in the 1st line
    scanf("%d\n", &t );
    //run a loop to accept 't' inputs
    while ( i <= t) {
        //accept 1 integer on the 1st line of each test case
        scanf("%d", &N);
        //output the negative integer - i.e. (-N)
        printf("%d\n",-N  );
        i = i+1;
    }
    
}