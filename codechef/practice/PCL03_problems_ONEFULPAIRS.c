/*Oneful Pairs
Input Format
The only line of input contains two space-separated integers 
a and b.
Output Format
Output Yes, if (a,b) form a 
Oneful Pair Oneful Pair. Output No if they do not.
You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).*/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Your code goes here (if needed)
    if(a+b+(a*b)==111){
        printf("yes");
    }
    else{
        printf("no");
    }

}