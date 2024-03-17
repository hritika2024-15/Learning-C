/*Else If Statement
In cases where you have to check for multiple conditions and run some code based on each, you have to use else if.

The else if keyword means "if the previous conditions were not true, then try this condition"
Task
Write a program which does the following

Take two integers b and r as input
Print "Rob scored higher marks than Bob", if r is greater than b
Print "Bob & Rob both scored the same", if both b and r are equal*/
#include <stdio.h>

int main() {
    int b, r;
    scanf("%d", &b);
    scanf("%d", &r);
    if(r>b){
        printf("Rob scored higher marks than Bob");
    }
    else if(b==r){
        printf("Bob and Rob both scored the same");
    }
}