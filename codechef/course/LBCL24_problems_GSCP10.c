/*Test cases with multiple lines of input
In the previous problem, we had t test cases and each test case had 1 line of input.
However, each test case can have multiple lines of input as well.

Task
Let's write a program in the IDE which performs the following

The 1st line of input is an integer t - the count of test cases
Each test case consists of 2 lines of input
The 1st line of input has 2 space separated integers - accept them as variables A and B
The 2nd line of input has 3 space separated integers - accept them as variables C, D and E
For each test case - output all integers on a single line*/
#include <stdio.h>

int main() {
    int t;
    int A,B,C,D,E;
    int i = 1;
    scanf("%d", &t );
    while ( i <= t) {
        scanf("%d %d", &A, &B );
        scanf("%d %d %d", &C, &D, &E );
        printf("%d %d %d %d %d\n", A,B,C,D,E );
         i++;
    }
 return 0;
}