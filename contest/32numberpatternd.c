/*
1                   1
3 3 3             3 3 3 
5 5 5 5 5       5 5 5 5 5 
7 7 7 7 7 7 7 7 7 7 7 7 7 7
5 5 5 5 5       5 5 5 5 5
3 3 3             3 3 3
1                   1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       int n;
    scanf("%d",&n);
    // Upper half of the pattern
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= i; j++) {//to print numbers
            printf("%d ", i);
        }
        for (int j = 1; j <= 3*(n - i); j++) {//to print spaces
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {//printing numbers 
            printf("%d ", i);
        }
        printf("\n");
    }
    // Lower half of the pattern
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {//to print numbers
            printf("%d ", i);
        }
        for (int j = 1; j <= 3 * (n - i); j++) {//to print spaces
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {//print numbers
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}