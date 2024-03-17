/*Test cases with multiple types of input
In the previous problem, each testcase had 2 lines of input - each consisting of integers.
Test cases can also contain a combination of integers and strings.

Task
Let's write a program in the IDE which performs the following

The 1st line of input contains t - the count of testcases
Each testcase consists of the following 2 lines of input
The 1st line of the testcase contains 2 integers - accept them as variables A and B
The 2nd line of the testcase contains 1 string - accept it as a variable S
For each test case, output on one line the 2 integers followed by the string*/
#include <stdio.h>

int main() {
    int t;
    int A,B;
    char C[30];
    int i = 1;
    scanf("%d", &t );
    while ( i <= t) {
        scanf("%d %d", &A, &B );
        scanf("%s", &C);
        printf("%d %d %s\n", A,B,C );
        i = i+1;
    }
    return 0;
}