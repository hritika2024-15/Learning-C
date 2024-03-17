/*Greater Average
You are given 3 numbers A,B, and C.
Determine whether the average of 
A and B is strictly greater than C or not?
Input Format
The first line of input will contain a single integer 
T, denoting the number of test cases.
Each test case consists of 
3 integers A,B, and C
Output Format
For each test case, output YES if average of A and B is strictly greater than C, NO otherwise.
You may print each character of the string in uppercase or lowercase
(for example, the strings YeS, yEs, yes and YES will all be treated as identical).*/
#include <stdio.h>
 int main()
{
    float A,B,C;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%f %f",&A,&B);
        scanf("%f",&C);
        float avg=(A+B)/2;
        if(avg>C){
            printf("yes\n");
        }
        else if(avg==C){
            printf("no\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}