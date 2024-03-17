/*Alice and Marks
Alice has scored 
X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. 
Determine whether she is happy or not.
input Format
The first and only line of input contains two space-separated integers X,Y — the marks of Alice and Bob respectively.
Output Format For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.
the judge is case insensitive so you may output the answer in any case.
In particular YES, yes, yEsare all considered equivalent toYes`.*/
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // Your code goes here (if needed)
    if(x>=2*y){
        printf("yes");
    }
    else{
        printf("no");
    }

}